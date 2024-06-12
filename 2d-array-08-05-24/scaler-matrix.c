#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter row and column: ");

    scanf("%d %d", &row, &col);

    int matrix[row][col];

    printf("Enter matrix: \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    int diagonal = 1;
    int diagonalValue = matrix[0][0];

    if (row != col)
        diagonal = 0;
    else
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] != 0 && i != j)
                {
                    diagonal = 0;
                    break;
                }

                else if (i == j && matrix[i][j] != diagonalValue && matrix[i][j] != 0)
                {
                    diagonal = 0;
                    break;
                }
            }

    printf("%s\n", diagonal ? "Scaler Matrix" : "Not scaler Matrix");

    return 0;
}