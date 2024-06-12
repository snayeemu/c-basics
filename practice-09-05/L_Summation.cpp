#include <stdio.h>
#include <stdlib.h>

void printSum(int *numbers, int size, int i, int sum)
{
    if (i == size)
    {
        printf("%d", sum);
        return;
    };

    sum += numbers[i];
    printSum(numbers, size, ++i, sum);
}

int main()
{
    int size;
    scanf("%d", &size);

    int numbers[size];
    for(int i = 0; i < size; i++) scanf("%d", &numbers[i]);

    printSum(numbers, size, 0, 0);

    return 0;
}