#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	/* If the least significant byte is at the lowest memory address*/
	if (*byte_ptr)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
