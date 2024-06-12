#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char * string){
    char stringCopy[1000];
    strcpy(stringCopy, string);

    int size = strlen(stringCopy);
    for(int i=0; i < size/2; i++){
        char strait = stringCopy[i];
        char reverse = stringCopy[size-i-1];
        stringCopy[i] = reverse;
        stringCopy[size-i-1] = strait;
    }

    return strcmp(stringCopy, string)==0 ? 1 : 0;

}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char string[1000];

    scanf("%s", string);

    int flag = is_palindrome(string);

    if(flag)
        printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}
