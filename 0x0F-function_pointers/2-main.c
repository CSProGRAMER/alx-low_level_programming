#include <stdio.h>
#include "function_pointers.h"

/**
 *  * is_98 - Checks if a number is equal to 98.
 *   * @num: The number to check.
 *    *
 *     * Return: 1 if the number is equal to 98, 0 otherwise.
 *      */
int is_98(int num)
{
		return (num == 98);
}

/**
 *  * is_strict_positive - Checks if a number is greater than 0.
 *   * @num: The number to check.
 *    *
 *     * Return: 1 if the number is greater than 0, 0 otherwise.
 *      */
int is_strict_positive(int num)
{
		return (num > 0);
}

/**
 *  * abs_diff_to_10 - Checks if the absolute difference to 10 is less than 10.
 *   * @num: The number to check.
 *    *
 *     * Return: 1 if the absolute difference to 10 is less than 10, 0 otherwise.
 *      */
int abs_diff_to_10(int num)
{
		return (num - 10 < 10);
}

int main(void)
{
		int array[] = {1, 4, 9, 16, 25, 36, 49, 64, 81};
			int size = sizeof(array) / sizeof(array[0]);
				int index;

					index = int_index(array, size, is_98);
						if (index != -1)
									printf("Index of the first element equal to 98: %d\n", index);
							else
										printf("No element equal to 98 found\n");

								index = int_index(array, size, is_strict_positive);
									if (index != -1)
												printf("Index of the first strictly positive element: %d\n", index);
										else
													printf("No strictly positive element found\n");

											index = int_index(array, size, abs_diff_to_10);
												if (index != -1)
															printf("Index of the first element with an absolute difference to 10 less than 10: %d\n", index);
													else
																printf("No element with an absolute difference to 10 less than 10 found\n");

														return (0);
}

