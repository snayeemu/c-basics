#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int array[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &array[i][j]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col / 2; j++)
        {
            
            int temp = array[i][j];
            array[i][j] = array[i][col - 1 - j];
            array[i][col - 1 - j] = temp;
            
        }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }

    return 0;
}