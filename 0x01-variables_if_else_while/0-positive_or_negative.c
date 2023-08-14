#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: a C program that prints using puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d is ", n);
	if (n > 0)
		printf("positive");
	else if (n == 0)
		printf("zero");
	else
		printf("negative");
	printf("\n");	
	return (0);
}
