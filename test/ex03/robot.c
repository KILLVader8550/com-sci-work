#include <stdio.h>

void forward(int *pos, int dir)
{
    if (dir == 0)
        pos[1]++;
    if (dir == 1)
        pos[0]--;
    if (dir == 2)
        pos[1]--;
    if (dir == 3)
        pos[0]++;
    printf("Coordinate (%d, %d)\n", pos[0], pos[1]);
}

void backward(int *pos, int dir)
{
    if (dir == 0)
        pos[1]--;
    if (dir == 1)
        pos[0]++;
    if (dir == 2)
        pos[1]++;
    if (dir == 3)
        pos[0]--;
    printf("Coordinate (%d, %d)\n", pos[0], pos[1]);
}

int main()
{
    char    input[10];
    int     i = 0;
    int     pos[2] = {0, 0};
    int     dir = 0;

    printf("Don't enter command more than 10 command bitch!!: ");
    scanf("%s", input);
    while (input[i] != '\0')
    {
        if (input[i] == 'D' || input[i] == 'd')
        {
            if (dir == 0)
                dir = 3;
            else
                dir--;
        }
        if (input[i] == 'A' || input[i] == 'a')
        {
            if (dir == 3)
                dir = 0;
            else
                dir++;
        }
        if (input[i] == 'W' || input[i] == 'w')
            forward(pos, dir);
        if (input[i] == 'S' || input[i] == 's')
            backward(pos, dir);
        i++;
    }
    printf("Fianl Coordinate (%d, %d)\n", pos[0], pos[1]);
    switch (dir)
    {
        case 0:
            printf("Face direction: North");
            break;
        case 1:
            printf("Face direction: West");
            break;
        case 2:
            printf("Face direction: South");
            break;
        case 3:
            printf("Face direction: East");
            break;
    }
    return (0);
}
