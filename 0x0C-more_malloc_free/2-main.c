#include "main.h"
#include <stdio.h>

int main(void)
{
	    unsigned int i;
	        char *arr;

		    i = 10;
		        arr = _calloc(i, sizeof(char));

			    if (arr == NULL)
				        {
						        printf("Memory allocation failed\n");
							        return (1);
								    }

			        for (i = 0; i < 10; i++)
					        printf("%d ", arr[i]);

				    printf("\n");

				        free(arr);

					    return (0);
}

