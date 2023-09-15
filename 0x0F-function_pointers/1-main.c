#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Prints an integer element
 * @elem: The integer element to print
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * add_one - Adds one to an integer element
 * @elem: The integer element to modify
 */
void add_one(int elem)
{
    printf("%d\n", elem + 1);
}

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    array_iterator(array, size, print_elem);

    printf("\nArray after adding one to each element:\n");
    array_iterator(array, size, add_one);

    return (0);
}
