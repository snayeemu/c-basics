#include<stdio.h>
#include<stdlib.h>

void print1To5(int number){
    if(number == 0)
        return;
    print1To5(number - 1);
    printf("%d ", number);
}

int main()
{
    print1To5(5);

    return 0;
}