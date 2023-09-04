#include "main.h"

int main(void)
{
	    int n = 29; /* Change this number to test with different values */

	        int result = is_prime_number(n);

		    if (result)
			            _puts(n + " is a prime number.");
		        else
				        _puts(n + " is not a prime number.");

			    return (0);
}

