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
        printf("%d is not prime.\n", nb);
        return ;
    }
    if (nb == 2 || nb == 3)
    {    
        printf("%d is prime.\n", nb);
        return ;
    }
    while (i++ < sqrt(nb))
    {
        if (nb % i == 0)
        {    
            printf("%d is not prime.\n", nb);
            return ;
        }
    }
    printf("%d is prime.\n", nb);
}

int main()
{
    int     nb1;
    char    c;

    printf("Enter your char: ");
    scanf("%c", &c);
    printf("Your char: %c\n", c);
    get_num(&nb1);
    printf("Your number divide by 2: %d \n", nb1 / 2);
    is_prime(nb1);
    return (0);
}