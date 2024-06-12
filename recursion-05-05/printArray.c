#include<stdio.h>
#include<stdlib.h>

void printArray(int *array, int size, int i  ){
    if(i == size)
        return;

    printf("%d ", array[i]);
    printArray(array, size, ++i);

}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter array: ");
    for(int i=0; i<size; i++)
        scanf("%d", &array[i]);

    printf("Elements of array: ");
    printArray(array, size, 0);

    return 0;
}