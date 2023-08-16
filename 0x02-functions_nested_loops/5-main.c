#include "print_sign.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = print_sign(98);
    putchar('\n');
    printf("%d\n", r);
    r = print_sign(0);
    putchar('\n');
    printf("%d\n", r);
    r = print_sign(0xff);
    putchar('\n');
    printf("%d\n", r);
    r = print_sign(-1);
    putchar('\n');
    printf("%d\n", r);
    return (0);
}

