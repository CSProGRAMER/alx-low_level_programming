#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	    unsigned int i;
	        char *str;

		    str = create_array(10, 'H');
		        if (str == NULL)
				    {
					            printf("Failed to create the array.\n");
						            return (1);
							        }

			    for (i = 0; i < 10; i++)
				            printf("%c", str[i]);
			        printf("\n");

				    free(str);

				        return (0);
}

