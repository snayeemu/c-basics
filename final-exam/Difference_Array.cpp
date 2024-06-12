#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);
    int size;

    for (int k = 0; k < numberOfTestCase; k++)
    {
        scanf("%d", &size);
        int numbers[size];
        int numbersCopy[size];
        int outputArray[size];

        for (int i = 0; i < size; i++)
            scanf("%d", &numbers[i]);

        for (int i = 0; i < size; i++)
        {
            numbersCopy[i] = numbers[i];
        }

        for (int i = 0; i < size - 1; i++)
            for (int j = i + 1; j < size; j++)
                if (numbersCopy[i] > numbersCopy[j])
                {
                    int temp = numbersCopy[i];
                    numbersCopy[i] = numbersCopy[j];
                    numbersCopy[j] = temp;
                }

        for (int i = 0; i < size; i++)
        {
            outputArray[i] = abs(numbers[i] - numbersCopy[i]);
            printf("%d ", outputArray[i]);
        }
        printf("\n");
    }

    return 0;
}
