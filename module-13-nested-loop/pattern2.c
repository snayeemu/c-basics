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

    return 0;
}