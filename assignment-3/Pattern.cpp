#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    scanf("%d", &number);
    int numberOfStarsOrDash = 1;
    int hashOrDash = 1;

    for (int i = 0; i < number; i++)
    {
        for (int j = i + 1; j < number; j++)
            printf(" ");
        for (int j = 0; j < numberOfStarsOrDash; j++)
            printf("%s", hashOrDash % 2 == 1 ? "#" : "-");

        printf("\n");
        numberOfStarsOrDash += 2;
        hashOrDash++;
    }

    numberOfStarsOrDash = number * 2 - 3;
    for (int i = 0; i < number - 1; i++){
        for (int j = 0; j < i + 1; j++)
            printf(" ");
        for(int j = 0; j < numberOfStarsOrDash; j++)
            printf("%s", hashOrDash % 2 == 1 ? "#" : "-");

        printf("\n");
        numberOfStarsOrDash -= 2;
        hashOrDash++;
    }

    return 0;
}
