#include <stdio.h>

int main()
{
    float   i;

    printf("Enter 3 digit number: ");
    scanf("%f", &i);
    if (i > 100 || i < 10)
        return (0);
    if ((int)i % 2 == 0)
        printf("%.1f Is even.", i);
    else
        printf("%.1f Is not even", i);
    return (0);
}