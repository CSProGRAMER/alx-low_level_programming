#include <stdio.h>
#include "4-sum.h"

/**
 * main - Entry point of the program
 *
 * Description: This program tests the SUM macro to compute the sum of two numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1 = 98;
    int num2 = 1024;

    printf("The sum of %d and %d is %d\n", num1, num2, SUM(num1, num2));

    return (0);
}
