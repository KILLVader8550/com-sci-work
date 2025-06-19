#include <unistd.h>

int main()
{
    int i;
    int j;

    i = 0;
    while (i++ < 10)
    {
        j = 10;
        while ((j--) - i >= 0)
            write(1, "*", 1);
        write(1, "\n", 1);
    }
    return (0);
}