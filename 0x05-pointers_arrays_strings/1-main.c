#include <stdio.h>
#include "main.h"
void swap_int(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_int(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

