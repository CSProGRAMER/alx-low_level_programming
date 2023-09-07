#include "main.h"
#include <stdio.h>

int main(void)
{
	    unsigned int old_size, new_size;
	        int *arr, *new_arr;
		    unsigned int i;

		        old_size = 5;
			    new_size = 10;

			        arr = malloc(sizeof(int) * old_size);

				    if (arr == NULL)
					        {
							        printf("Memory allocation failed\n");
								        return (1);
									    }

				        printf("Original array: ");
					    for (i = 0; i < old_size; i++)
						        {
								        arr[i] = i;
									        printf("%d ", arr[i]);
										    }
					        printf("\n");

						    new_arr = _realloc(arr, sizeof(int) * old_size, sizeof(int) * new_size);

						        if (new_arr == NULL)
								    {
									            printf("Realloc failed\n");
										            return (1);
											        }

							    printf("New array: ");
							        for (i = 0; i < new_size; i++)
									    {
										            printf("%d ", new_arr[i]);
											        }
								    printf("\n");

								        free(new_arr);

									    return (0);
}

