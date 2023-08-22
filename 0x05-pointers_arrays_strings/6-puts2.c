#include "_putchar.h"
/**
 * puts2 - Prints every othethe first character.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] != '\0')
			_putchar(',');
		i += 2;
	}

	_putchar('\n');
}
