#include <stdio.h>
#include <stdlib.h>

int cols;
int gmatrix1[][], **gmatrix2[][];
void printSum(int matrix1[][cols], int matrix2[]){
    printf("%d", matrix1[0][0]);
    
}

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int matrix1[row][col], matrix2[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix1[j][i]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix2[j][i]);

    cols = col;
    gmatrix1 = matrix1;
    gmatrix2 = matrix2;

    

    return 0;
}