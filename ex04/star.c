#include <unistd.h>

int main()
{
    for (char i = '0'; i < ':'; i++)
    {
        for (char j = '0'; j < i; j++)
            write(1, "*", 1);
        write(1, "\n", 1);
    }
    return (0);
}