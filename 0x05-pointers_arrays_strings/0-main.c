#include <stdio.h>
#include "main.h"
void reset_to_98(int *n); 

int main(void)
{
	    int num = 10;

	        printf("Original value: %d\n", num);
		    reset_to_98(&num); 
		        printf("Updated value: %d\n", num);

			    return 0;
}
