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
    int number;
    scanf("%d", &number);

    int exist = 0;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (array[i][j] == number)
            {
                exist = 1;
                break;
            }

    printf("%s", exist ? "will not take number" : "will take number");

    return 0;
}