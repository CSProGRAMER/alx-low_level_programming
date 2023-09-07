#include "main.h"
#include <stdio.h>

int main(void)
{
	    int *arr;
	        int i, min, max;

		    min = 0;
		        max = 10;

			    arr = array_range(min, max);

			        if (arr == NULL)
					    {
						            printf("Memory allocation failed or min > max\n");
							            return (1);
								        }

				    for (i = 0; i <= max - min; i++)
					            printf("%d ", arr[i]);

				        printf("\n");

					    free(arr);

					        return (0);
}

