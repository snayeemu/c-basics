#include <stdio.h>

int main()
{
    int range;
    scanf("%d", &range);

    for (int i = 0; i < range; i++)
    {
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}