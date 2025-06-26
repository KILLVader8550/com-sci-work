#include <stdio.h>

int main()
{
    float score;

    printf("Enter your grade: ");
    scanf("%f", &score);
    if (score >= 90)
        printf("Your grade: 4.0");
    else if (score >= 75)
        printf("Your grade: 3.5");
    else if (score >= 70)
        printf("Your grade: 3.0");
    else if (score >= 65)
        printf("Your grade: 2.5");
    else if (score >= 60)
        printf("Your grade: 2.0");
    else if (score >= 55)
        printf("Your grade: 1.5");
    else if (score >= 50)
        printf("Your grade: 1.0");
    else
        printf("Your grade: 0");
    return (0);
}