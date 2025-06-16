#include <unistd.h>

long ft_atoi(char *str)
{
    long    num;
    int     sign;
    int     i;

    num = 0;
    sign = 1;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * sign);
}

int is_prime (char *str)
{
    int i;
    long nb;

    i = 0;
    nb = ft_atoi(str);
    if (nb < 2)
        return (0);
    if (nb == 2 || nb == 3)
        return (1);
    while (i < (nb / 2))
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (is_prime(argv[1]))
            write(1, "Is prime.", 10);
        else
            write(1, "Is not prime.", 14);
        return (0);
    }
    return (0);
}
