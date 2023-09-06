#include "main.h"
#include <stdio.h>

int main(void)
{
	    char *s1 = "Hello, ";
	        char *s2 = "world!";
		    char *concatenated_str;

		        concatenated_str = str_concat(s1, s2);

			    if (concatenated_str == NULL)
				        {
						        printf("Failed to concatenate strings.\n");
							        return (1);
								    }

			        printf("Concatenated string: %s\n", concatenated_str);

				    return (0);
}

