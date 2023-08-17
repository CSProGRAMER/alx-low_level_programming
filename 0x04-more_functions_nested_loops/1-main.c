#include <stdio.h>
#include "main.h"

int _isdigit(int c);

int main(void)
{
    char digits[] = "0123456789";
    char non_digits[] = "abcXYZ";
    int i;

    printf("Testing _isdigit function:\n");
    
    for (i = 0; digits[i]; i++)
    {
        if (_isdigit(digits[i]))
            printf("%c is a digit.\n", digits[i]);
        else
            printf("%c is not a digit.\n", digits[i]);
    }

    for (i = 0; non_digits[i]; i++)
    {
        if (_isdigit(non_digits[i]))
            printf("%c is a digit.\n", non_digits[i]);
        else
            printf("%c is not a digit.\n", non_digits[i]);
    }

    return (0);
}

