#include <stdio.h>

void to_string(int nb)
{
    char    a;
    char    b;

    a = (nb / 10) + '0';
    b = (nb % 10) + '0';
    printf("%c.%c\n", a, b);
    printf("%c.%c\n", b, a);
}

int main()
{
    int nb;

    printf("Enter number between 10 - 99: ");
    scanf("%d", &nb);
    if (nb < 10 || nb > 99)
        printf("Invalid input.");
    else
        to_string(nb);
    return (0);
}