#include <stdio.h>

int _isupper(int c);

int main(void)
{
    char uppercase_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowercase_letters[] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    printf("Testing _isupper function:\n");
    
    for (i = 0; uppercase_letters[i]; i++)
    {
        if (_isupper(uppercase_letters[i]))
            printf("%c is uppercase.\n", uppercase_letters[i]);
        else
            printf("%c is not uppercase.\n", uppercase_letters[i]);
    }

    for (i = 0; lowercase_letters[i]; i++)
    {
        if (_isupper(lowercase_letters[i]))
            printf("%c is uppercase.\n", lowercase_letters[i]);
        else
            printf("%c is not uppercase.\n", lowercase_letters[i]);
    }

    return (0);
}

