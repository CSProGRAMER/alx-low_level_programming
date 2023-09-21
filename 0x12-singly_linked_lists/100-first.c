#include <stdio.h>

/**
 * before_main - Function to execute before main.
 *
 * Description: Prints a message before the main function is executed.
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
