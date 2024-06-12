#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int number;
    scanf("%d", &number);
    number -= 1;
    int array[number + 1];
    for(int i = 0; i <= number; i++)
        scanf("%d", &array[i]);

    number = number  % 2 == 0 ? number - 1 : number;

    for(int i = number; i > 0; i -= 2) 
        printf("%d ", array[i]);
    

    return 0;
}
