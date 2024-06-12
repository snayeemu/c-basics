#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number % 3 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
