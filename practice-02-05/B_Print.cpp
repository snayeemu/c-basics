#include <stdio.h>

void print(long long int number)
{
    

    for (long long int i = 1; i <= number; i++)
        if (i == number)
            printf("%lld", i);
        else
            printf("%lld ", i);
}

int main()
{
    long long int number;
    scanf("%lld", &number);
    print(number);

    return 0;
}