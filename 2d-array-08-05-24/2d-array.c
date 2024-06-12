#include <stdio.h>
#include <stdlib.h>

int main()
{
    int twoDArray[5][3];

    printf("Enter the array: ");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &twoDArray[i][j]);

    printf("\nElements of the array:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", twoDArray[i][j]);
        printf("\n");
    }

    return 0;
}