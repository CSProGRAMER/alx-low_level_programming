#include <stdio.h>
#include "main.h"
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

    printf("2D Grid (Before Freeing):\n");
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }

    free_grid(grid, height);
    printf("\n2D Grid (After Freeing):\n");

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }

    return (0);
}
