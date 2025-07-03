#include <unistd.h>

void    ft_star()
{
    for (char i = '0'; i < ':'; i++)
    {
        for (char j = '0'; j < i; j++)
            write(1, "*", 1);
        write(1, "\n", 1);
    }
}

void    ft_star_reverse()
{
    for (char i = '0'; i < ':'; i++)
    {
        for (char j = ':'; j > i; j--)
            write(1, "*", 1);
        write(1, "\n", 1);
    }
}

void    ft_star_back()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
            write(1, " ", 1);
        for (int k = 0; k <= i; k++)
            write(1, "*", 1);

        write(1, "\n", 1);
    }
}

void    ft_star_back_reverse()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
            write(1, " ", 1);
        for (int k = 0; k < 10 - i; k++)
            write(1, "*", 1);

        write(1, "\n", 1);
    }
}

int main()
{
    ft_star();
    write(1, "\n", 1);
    ft_star_reverse();
    write(1, "\n", 1);
    ft_star_back();
    write(1, "\n", 1);
    ft_star_back_reverse();
    write(1, "\n", 1);
    return (0);
}
