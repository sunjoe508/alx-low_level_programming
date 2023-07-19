#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_Name - it will print a name
 * @name: the name to be printed
 * @f: the pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
