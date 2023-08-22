#include <stdio.h>
#include "main.h"
void print_array(int *a, int n); 

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, size);

    return 0;
}

