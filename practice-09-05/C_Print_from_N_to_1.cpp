#include<stdio.h>
#include<stdlib.h>

void printNumbers(int number){
    if(number == 0) return;
    printf("%d%s", number, number == 1 ? "" : " ");
    printNumbers(number - 1);
}

int main()
{
    int number;
    scanf("%d", &number);

    printNumbers(number);

    return 0;
}