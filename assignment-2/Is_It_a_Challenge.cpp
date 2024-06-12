#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number;
    scanf("%d", &number);
    if(number <= 0)
        for(int i = number; i <= 0; i++) 
            printf("%d ", i);
    else 
        for(int i = 1; i <= number; i++)
            printf("%d ", i);

    return 0;
}
