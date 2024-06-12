#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    printf("1st index er value: %d\n", *ar);
    printf("2nd index er value: %d\n", *(ar+1));
    printf("3rd index er value: %d\n", *(2+ar));
    printf("2nd index er value: %d\n", 1[ar]); //alternative method to access in array. 

    return 0;
}