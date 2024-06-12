#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    scanf("%d", &number);
    int digit = 1;
    

    for (int i = 0; i < number; i++)
    {
        for (int j = i + 1; j < number; j++)
            printf(" ");
        for (int j = digit; j > 0; j--)
            printf("%d", j);

        printf("\n");
        digit += 1;
       
    }

   

    return 0;
}
