#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int nb;

    i = 0;
    printf("Enter number: ");
    scanf("%d", &nb);
    while (i++ < sqrt(nb))
    {
        if (nb % i == 0)
        {    
            printf("Is not prime.\n");
            return (0);
        }
    }
    printf("Is prime.\n");
    return (0);
}