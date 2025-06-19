#include <stdio.h>
#include <math.h>

void get_num (int *nb)
{
    printf("Enter number: ");
    scanf("%d", nb);
}

void is_prime (int nb)
{
    int i;

    i = 0;
    if (nb < 2)
    {    
        printf("Is not prime.\n");
        return ;
    }
    if (nb == 2 || nb == 3)
    {    
        printf("Is prime.\n");
        return ;
    }
    while (i++ < sqrt(nb))
    {
        if (nb % i == 0)
        {    
            printf("Is not prime.\n");
            return ;
        }
    }
    printf("Is prime.\n");
}

int main()
{
    int     nb1;
    char    c;

    printf("Enter your char: ");
    scanf("%c", &c);
    printf("Your char: %c\n", c);
    get_num(&nb1);
    printf("Your number divide by 2: %d | ", nb1 / 2);
    is_prime(nb1 / 2);
    return (0);
}