#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function pointer for printing a name */
typedef void (*print_name_function)(char *);

/* Function pointer for comparing integers */
typedef int (*cmp_function)(int a, int b);

/* Function pointer for performing an operation on integers */
typedef int (*op_function)(int a, int b);

/* Function that prints a character to stdout */
int _putchar(char c);

/* Function that prints a name */
void print_name(char *name, void (*f)(char *));

/* Function that executes a function given as a parameter on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function that searches for an integer in an array using a specified comparison function */
int int_index(int *array, int size, int (*cmp)(int));

/* Function that performs an operation on two integers */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* FUNCTION_POINTERS_H */

