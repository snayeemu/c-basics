#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);

    double multiplicationOfFour;
    int numbers[3];
    for (int i = 0; i < numberOfTestCase; i++)
    {
        scanf("%lf", &multiplicationOfFour);
        int multiplicationOfThree = 1;
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &numbers[j]);
            multiplicationOfThree *= numbers[j]; 
        }
        double fourthNumber = multiplicationOfFour / multiplicationOfThree;

        if(fourthNumber == round(fourthNumber))
            printf("%0.lf\n", fourthNumber);
        else printf("-1\n");
    }

    return 0;
}
