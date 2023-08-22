#include "_putchar.h"
/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

}
