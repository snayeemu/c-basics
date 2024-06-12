#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
        printf("%d %s", i, i % 5 == 0 ? "Yes\n" : "No\n");

    return 0;
}