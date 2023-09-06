#include "main.h"
#include <stdio.h>

int main(void)
{
	    char *str = "Hello, Holberton";
	        char *str_copy;

		    str_copy = _strdup(str);

		        if (str_copy == NULL)
				    {
					            printf("Failed to duplicate the string.\n");
						            return (1);
							        }

			    printf("Original string: %s\n", str);
			        printf("Duplicated string: %s\n", str_copy);

				    return (0);
}

