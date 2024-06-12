#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    printf("%s", number%2 == 0 ? "even" : "odd");

    return 0;
}