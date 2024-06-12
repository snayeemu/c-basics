#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number = 0;
    scanf("%d", &number);
    int numbers[number];
    for (int i = 0; i < number; i++)
        scanf("%d", &numbers[i]);
    int firstIndex, secondIndex;
    scanf("%d %d", &firstIndex, &secondIndex);

    int temp = numbers[firstIndex];
    numbers[firstIndex] = numbers[secondIndex];
    numbers[secondIndex] = temp;

    for(int i = number - 1; i >= 0; i--)
        printf("%d ", numbers[i]);


    return 0;
}
