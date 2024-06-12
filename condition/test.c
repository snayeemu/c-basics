#include<stdio.h>

int main() {
    int n = 10;
    int i = 0;

    for(i; i<n; i++) 
        printf("%d ", i);
    printf("%d\n", i);

    i = n;
    for(i; i>0; i-=1)
        printf("%d ", i);
    printf("%d\n", i);

    i = n-1;
    for(i; i>=0; i-=1)
        printf("%d ", i);
    printf("%d\n", i);
    

    return 0;
}