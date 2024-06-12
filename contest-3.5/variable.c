#include<stdio.h>

int main(){
    int integer;
    long long int longLongInteger;
    double doubleNumber;
    char character;

    scanf("%d %lld %lf %c", &integer, &longLongInteger, &doubleNumber, &character);

    printf("%d\n%lld\n%.2lf\n%c", integer, longLongInteger, doubleNumber, character);

    return 0;
}