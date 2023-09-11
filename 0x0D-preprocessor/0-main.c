#include "0-object_like_macro.h"
#include <stdio.h>

int main(void)
{
    int array[SIZE];

    printf("Size of array: %lu\n", (unsigned long)sizeof(array));

    return (0);
}
