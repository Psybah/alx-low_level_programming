#include "function_pointers.h"

/**
 * print_name - prints a name using a given printing function
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
