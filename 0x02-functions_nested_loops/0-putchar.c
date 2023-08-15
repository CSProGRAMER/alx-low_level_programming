#include <unistd.h>
/**
main - Entry point

Description: a C program that prints using puts function

Return: Always 0 (Success)
*/
int main(void)
{
  write(1, "_putchar\n", 9);
  return (0);
}
