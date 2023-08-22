#include <stdio.h>
#include "main.h"
void puts_half(char *str); 

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Programming";

    puts_half(str1);
    puts_half(str2);
    puts_half(str3);

    return 0;
}

