#include<stdio.h>
#include<stdlib.h>

void printEven(int *array, int size, int i){
    if(i >= size) return;
    
    printEven(array, size, i += 2);
    printf("%d ", array[i - 2]);

}

int main()
{
    int size;
    scanf("%d", &size);
    int numbers[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    printEven(numbers, size, 0);

    return 0;
}