#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	    char **words;
	        int i;

		    words = strtow("    Holberton School     Makefile       CIsFun  ");
		        if (words == NULL)
				    {
					            printf("strtow failed\n");
						            return (1);
							        }

			    for (i = 0; words[i] != NULL; i++)
				        {
						        printf("%s\n", words[i]);
							        free(words[i]);
								    }

			        free(words);
				    return (0);
}

