#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	int flag = 0; /* Used to manage separator printing */

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", flag ? ", " : "", va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", flag ? ", " : "", va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", flag ? ", " : "", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", flag ? ", " : "", str);
				break;
			default:
				i++;
				continue;
		}
		flag = 1;
		i++;
	}
	printf("\n");
	va_end(args);
}
