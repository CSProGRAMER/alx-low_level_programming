
#include "main.h"

int main(void)
{
    char *str = "Hello, Recursion!";
    int length = _strlen_recursion(str);

    _putchar('T');
    _putchar('h');
    _putchar('e');
    _putchar(' ');
    _putchar('l');
    _putchar('e');
    _putchar('n');
    _putchar('g');
    _putchar('t');
    _putchar('h');
    _putchar(' ');
    _putchar('o');
    _putchar('f');
    _putchar(' ');
    _putchar('t');
    _putchar('h');
    _putchar('e');
    _putchar(' ');
    _putchar('s');
    _putchar('t');
    _putchar('r');
    _putchar('i');
    _putchar('n');
    _putchar('g');
    _putchar(' ');
    _putchar('i');
    _putchar('s');
    _putchar(':');
    _putchar(' ');
    _putchar((length / 10) + '0'); /* Print the tens digit */
    _putchar((length % 10) + '0'); /* Print the ones digit */
    _putchar('\n'); /* Print a newline */

    return (0);
}
