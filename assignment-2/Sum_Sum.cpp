#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    int sumOfPositives = 0, sumOfNegatives = 0;
    scanf("%d", &number);
    int numbers[number];
    for (int i = 0; i < number; i++)
        scanf("%d", &numbers[i]);

    for(int i = 0; i < number; i++)
        if(numbers[i] > 0)
            sumOfPositives += numbers[i];
        else sumOfNegatives += numbers[i];
    
    printf("%d %d\n", sumOfPositives, sumOfNegatives);

    

    return 0;
}
