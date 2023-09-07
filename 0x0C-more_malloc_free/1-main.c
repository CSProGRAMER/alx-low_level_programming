#include "main.h"
#include <stdio.h>

int main(void)
{
	    char *s1 = "Hello, ";
	        char *s2 = "world!";
		    char *s3;

		        s3 = string_nconcat(s1, s2, 5);
			    printf("%s\n", s3);
			        free(s3);

				    return (0);
}

