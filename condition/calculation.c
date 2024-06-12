#include<stdio.h>

int main() {
    int firstNumber, secondNumber;
    scanf("%d %d", &firstNumber, &secondNumber);

    printf("%d + %d = %d\n", firstNumber, secondNumber, firstNumber + secondNumber);
    printf("%d - %d = %d\n", firstNumber, secondNumber, firstNumber - secondNumber);
    printf("%d * %d = %d\n", firstNumber, secondNumber, firstNumber * secondNumber);
    printf("%d / %d = %.2f\n", firstNumber, secondNumber, (firstNumber*1.0) / secondNumber);

    return 0;
}