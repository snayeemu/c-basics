#include <stdio.h>
#include <stdlib.h>

void minMax(int *array, int size){
    int min = array[0], max=array[0];
    int i = 1;

  

    for(i = 1; i < size; i++){
        if(min > array[i])
            min = array[i];
        if(max < array[i])
            max = array[i];
    }

    printf("%d %d\n", min, max);
}


int main()
{
    int size;
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    minMax(array, sizeof(array)/sizeof(array[0]));
    

    return 0;
}