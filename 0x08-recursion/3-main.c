#include "main.h"

int main(void)
{
	    int n = 5;
	        int result;

		    result = factorial(n);

		        if (result == -1)
				    {
					            _puts("Error: Factorial is not defined for negative numbers");
						            return (1); /* Return 1 to indicate an error */
							        }

			    _puts("Factorial of ");
			        _putchar(n + '0'); /* Convert the number to character and print it */
				    _puts(" is: ");
				        _putchar(result / 10 + '0'); /* Print the tens digit of the result */
					    _putchar(result % 10 + '0'); /* Print the ones digit of the result */
					        _putchar('\n'); /* Print a newline */

						    return (0);
}

