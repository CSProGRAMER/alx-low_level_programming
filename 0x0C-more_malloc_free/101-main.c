#include "main.h"

int main(int argc, char *argv[])
{
	    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		        {
				        _print("Error");
					        _putchar('\n');
						        return (98);
							    }

	        multiply(argv[1], argv[2]);

		    return (0);
}

