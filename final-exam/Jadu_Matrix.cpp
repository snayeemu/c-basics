#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row, col;
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    int isJadu = 1;
    if (row != col)
    {
        isJadu = 0;
    }
    else
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j || i + j == row - 1)
                {
                    if (matrix[i][j] != 1)
                    {
                        isJadu = 0;
                        break;
                    }
                }
                else if (matrix[i][j] != 0)
                {
                    isJadu = 0;
                    break;
                }
            }
        }

    printf("%s", isJadu ? "YES" : "NO");

    return 0;
}
