#include <stdio.h>

int main()
{
    int i;

    printf("Enter number (65 - 90): ");
    scanf("%d", &i);
    if (i < 65 || i > 90)
    {
        printf("Invalid value.");
        return (0);
    }
    printf("%c", i);
    return (0);
}