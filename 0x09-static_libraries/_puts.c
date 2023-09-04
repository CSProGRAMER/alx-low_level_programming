#include <unistd.h>

void _puts(char *s) {
	    write(1, s, _strlen(s));
	        write(1, "\n", 1);
}

