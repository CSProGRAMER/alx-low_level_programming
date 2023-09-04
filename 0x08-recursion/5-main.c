#include "main.h"

int main(void)
{
	    int n = 16; /* Change this number to test with different values */

	        int result = _sqrt_recursion(n);

		    if (result == -1)
			        {
					        _puts("Error: The number does not have a natural square root.");
						        return (1); /* Return 1 to indicate an error */
							    }

		        _puts("The square root of ");
			    _putchar(n / 10 + '0'); /* Print the tens digit of the input number */
			        _putchar(n % 10 + '0'); /* Print the ones digit of the input number */
				    _puts(" is: ");
				        _putchar(result / 10 + '0'); /* Print the tens digit of the result */
					    _putchar(result % 10 + '0'); /* Print the ones digit of the result */
					        _putchar('\n'); /* Print a newline */

						    return (0);
}

