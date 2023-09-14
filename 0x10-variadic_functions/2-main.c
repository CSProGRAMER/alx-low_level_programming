#include "variadic_functions.h"
#include <stddef.h>
int main(void)
{
		print_strings(", ", 4, "Hello", "world", "of", "C");
			print_strings(", ", 0);
				print_strings(NULL, 3, "This", "is", "a test");
					print_strings(", ", 5, "First", NULL, "Third", "Fourth", "Fifth");
						return (0);
}

