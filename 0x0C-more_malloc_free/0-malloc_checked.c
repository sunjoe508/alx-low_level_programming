#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checkd- the function to alocate meory using malloc
 * @b: the number of byes to be allocated
 * Return: the program returns the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
