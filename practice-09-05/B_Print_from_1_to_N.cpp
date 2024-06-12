#include<stdio.h>
#include<stdlib.h>

void printNumbers(int number){
    if(number == 0) return;
    printNumbers(number - 1);
    printf("%d\n", number);
}

int main()
{
    int number;
    scanf("%d", &number);

    printNumbers(number);

    return 0;
}