#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
        if (i % 7 == 0 && i % 3 == 0)
            printf("%d\n", i);

    return 0;
}
