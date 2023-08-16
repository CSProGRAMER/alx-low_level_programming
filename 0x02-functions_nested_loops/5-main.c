#include "print_sign.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = print_sign(98);
    printf("%d\n", r);
    r = print_sign(0);
    printf("%d\n", r);
    r = print_sign(0xff);
    printf("%d\n", r);
    r = print_sign(-1);
    printf("%d\n", r);
    return (0);
}

