#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter row and column: ");

    scanf("%d %d", &row, &col);

    int matrik[row][col];

    printf("Enter matrix: \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrik[i][j]);

    int numberOfZeros = 0;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (matrik[i][j] == 0)
                numberOfZeros++;
            else
                break;

    printf("%s\n", numberOfZeros == (row * col) ? "Zero Matrix" : "Not Zero Matrix");

    return 0;
}