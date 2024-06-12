#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    printf("%s", number > 0 ? "positive" : number < 0 ? "negative" : "zero"); 

    return 0;
}