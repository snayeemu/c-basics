#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    printf("Enter size of the array: ");
    int array[size];
    printf("Enter an array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < size; i++)
        for (int j = i+1; j < size; j++)
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}