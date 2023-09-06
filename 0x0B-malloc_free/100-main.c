#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int ac, char **av)
{
	    char *concatenated;

	        if (ac == 1 || av == NULL)
			    {
				            printf("Usage: %s arg1 arg2 ...\n", av[0]);
					            return (1);
						        }

		    concatenated = argstostr(ac - 1, av + 1);

		        if (concatenated == NULL)
				    {
					            printf("Error: Memory allocation failed\n");
						            return (1);
							        }

			    printf("%s", concatenated);

			        free(concatenated);
				    return (0);
}

