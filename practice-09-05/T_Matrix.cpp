#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    int row = size, col = size;
    int matrix[row][col];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &matrix[i][j]);

    int sumOfPrimaryDiagonal = 0, sumOfSecondPrimaryDiagonal = 0;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                sumOfPrimaryDiagonal += matrix[i][j];
            }
            if (i + j == row - 1) // chaged here
            {
                sumOfSecondPrimaryDiagonal += matrix[i][j]; 
            }
        }

    printf("%d", abs(sumOfPrimaryDiagonal - sumOfSecondPrimaryDiagonal));

    return 0;
}