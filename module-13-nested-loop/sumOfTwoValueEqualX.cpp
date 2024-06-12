#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum ;
    printf("Enter a number: ");
    scanf("%d", &sum);
    int array[] = {2, 4, 5, 10, 11};
    int flag = 0;

    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        for (int j = i+1; j < sizeof(array)/sizeof(int); j++)
            if (array[i] + array[j] == sum)
            {
                flag = 1;
                break;
            }
    }

    if (flag == 0)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}