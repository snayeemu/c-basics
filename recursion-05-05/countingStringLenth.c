#include<stdio.h>
#include<stdlib.h>

int stringLength(char *string, int index){
    if (string[index] == '\0')
        return index;
    else
        stringLength(string, ++index);
}

int main()
{
    printf("%d\n", stringLength("hello", 0));

    return 0;
}