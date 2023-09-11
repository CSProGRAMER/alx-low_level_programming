#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - Entry point of the program
 * Description: This program tests the ABS macro to compute the absolute
 * value of a number.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 98;
	int num2 = -1024;

	printf("The absolute value of %d is %d\n", num1, ABS(num1));
	printf("The absolute value of %d is %d\n", num2, ABS(num2));

	return (0);
}
