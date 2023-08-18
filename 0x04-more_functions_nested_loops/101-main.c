#include "main.h"
#include "_putchar.h"

int main(void)
{
    int n;

    n = 98;
    print_number(n);
    _putchar('\n');

    n = 402;
    print_number(n);
    _putchar('\n');
    n = 1024;
    print_number(n);
    _putchar('\n');
    n = 0;
    print_number(n);
    _putchar('\n');
    n = -98;
    print_number(n);

    _putchar('\n');

    return (0);
}

