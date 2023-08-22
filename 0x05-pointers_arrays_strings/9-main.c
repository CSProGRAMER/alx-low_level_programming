#include <stdio.h>
#include  "main.h"
char *_strcpy(char *dest, char *src); 

int main(void)
{
    char source[] = "Hello, World!";
    char destination[50];

    _strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return (0);
}

