#include <stdio.h>

int mul(int a, int b);

int main(void)
{
    int a = 5, b = 3;

    printf("Multiplying %d and %d: %d\n", a, b, mul(a, b));

    return (0);
}

