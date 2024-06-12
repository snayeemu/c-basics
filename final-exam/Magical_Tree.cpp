#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    scanf("%d", &number);
    int numberOfStars = 1;
    int numberOfRows = 6 + (number / 2);
    int numberOfSpace = numberOfRows - 1;

    for (int i = 0; i < 6 + (number / 2); i++)
    {
        for (int j = 0; j < numberOfSpace; j++)
            printf(" ");
        for (int j = 0; j < numberOfStars; j++)
            printf("*");
        printf("\n");
        numberOfStars += 2;
        numberOfSpace--;
    }

        for (int i = 0; i < 5; i++)
    {
        printf("     ");
        for (int j = 0; j < number; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
