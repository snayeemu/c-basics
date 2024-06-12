#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int *array, int size)
{
    for (int i = 0; i < size; i++)
        if (array[i] == 1)
            return i;
        return;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    printf("%d\n", count_before_one(array, size));
    

    return 0;
}
