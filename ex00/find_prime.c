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
    int i;
    int nb1;
    int nb2;

    get_num(&nb1);
    printf("Your number: %d | ", nb1);
    is_prime(nb1);
    get_num(&nb2);
    printf("Your number divide by 2: %d | ", nb2 / 2);
    is_prime(nb2);
    return (0);
}