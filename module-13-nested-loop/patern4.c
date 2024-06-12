#include <stdio.h>
#include <stdlib.h>

int main()
{
    int range;
    int numberOfStars = 1;
    scanf("%d", &range);

    for (int i = 0; i < range; i++)
    {
        for (int j = i; j < range - 1; j++)
            printf(" ");

        for (int k = 0; k < numberOfStars; k++)
            printf("*");

        printf("\n");
        numberOfStars += 2;
    }

    numberOfStars = range * 2 - 3;
    for (int i = 0; i < range - 1; i++)
    {
        for (int j = 0; j <= i; j++)
            printf(" ");
        

        for (int j = 0; j < numberOfStars; j++)
            printf("*");

        printf("\n");
        numberOfStars -= 2;
    }

    return 0;
}