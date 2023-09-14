#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
	    int result;

	        result = sum_them_all(4, 10, 20, 30, 40);
		    printf("Sum: %d\n", result);

		        result = sum_them_all(3, 5, 10, 15);
			    printf("Sum: %d\n", result);

			        result = sum_them_all(0);
				    printf("Sum: %d\n", result);

				        return (0);
}

