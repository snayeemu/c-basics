#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even(){
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    int evenElements = 0, oddElements = 0;

    for(int i = 0; i < size; i++)
        if(array[i]%2==0)
            evenElements++;
        else oddElements++;

    printf("%d %d\n", evenElements, oddElements);

}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    odd_even();

    return 0;
}
