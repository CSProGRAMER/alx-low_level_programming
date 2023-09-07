
#include "main.h"
#include <stdio.h>

int main(void)
{
	    char *ptr;

	        ptr = malloc_checked(1024);
		    printf("Memory allocated\n");
		        free(ptr);
			    return (0);
}

