#include <stdio.h>
#include "main.h"

void rev_string(char *s);

int main(void)
{
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    rev_string(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

