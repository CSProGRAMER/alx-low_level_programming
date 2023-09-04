#include "main.h"

int main(void)
{
	    int x = 2;
	        int y = 4;
		    int result;

		        result = _pow_recursion(x, y);

			    if (result == -1)
				        {
						        _puts("Error: Power is not defined for negative exponents");
							        return (1); /* Return 1 to indicate an error */
								    }

			        _puts("Result of ");
				    _putchar(x + '0'); /* Convert the base to character and print it */
				        _puts(" raised to the power of ");
					    _putchar(y + '0'); /* Convert the exponent to character and print it */
					        _puts(" is: ");
						    _putchar(result / 100 + '0'); /* Print the hundreds digit of the result */
						        _putchar((result / 10) % 10 + '0'); /* Print the tens digit of the result */
							    _putchar(result % 10 + '0'); /* Print the ones digit of the result */
							        _putchar('\n'); /* Print a newline */

								    return (0);
}

