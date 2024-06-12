#include <stdio.h>

int main()
{
    long long int numbers[3];
    long long int numbersCopy[3];

    for (int i = 0; i < 3; i++)
        scanf("%lld", &numbers[i]);

    for(int i = 0; i < 3; i++)
        numbersCopy[i] = numbers[i];

    for(int i = 0; i < 3 - 1; i++)
        for(int j = i+1; j < 3; j++)
            if(numbersCopy[i] > numbersCopy[j]){
                int temp = numbersCopy[i];
                numbersCopy[i] = numbersCopy[j];
                numbersCopy[j] = temp;
            }

    for(int i = 0; i < 3; i++)
        printf("%lld\n", numbersCopy[i]);
    printf("\n");
    for(int i = 0; i < 3; i++)
        printf("%lld\n", numbers[i]);
    

    return 0;
}