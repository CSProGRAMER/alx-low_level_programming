#include <stdio.h>
#include "main.h"
int _strlen(char *s); 

int main(void)
{
    char str[] = "Hello, World!";
    int length = _strlen(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}

