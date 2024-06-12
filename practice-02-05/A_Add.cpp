#include<stdio.h>
#include<stdlib.h>

int sum(int number1, int number2){
    return number1+number2;
}

int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    printf("%d\n", sum(number1, number2));

    return 0;
}