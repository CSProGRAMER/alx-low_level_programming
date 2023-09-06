#include "main.h"
#include <stdio.h>

int main(void)
{
	    int **grid;
	        int width = 4;
		    int height = 3;
		        int i, j;

			    grid = alloc_grid(width, height);

			        if (grid == NULL)
					    {
						            printf("Failed to allocate memory for the grid.\n");
							            return (1);
								        }

				    printf("2D Grid:\n");
				        for (i = 0; i < height; i++)
						    {
							            for (j = 0; j < width; j++)
									                printf("%d ", grid[i][j]);
								            printf("\n");
									        }

					    return (0);
}

