#include<stdio.h>
#include<stdlib.h>

void print(int number){
    if(number == 0) return;
    printf("I love Recursion\n");
    print(number - 1);
}

int main()
{
    int number;
    scanf("%d", &number);

    print(number);
    

    return 0;
}