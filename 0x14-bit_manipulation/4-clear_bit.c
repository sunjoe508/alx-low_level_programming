#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to number to be changed
 * @index: location position to change
 * Return: 1 if sucessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int catch;

	if (index > 64)
		return (-1);
	catch = index;
	for (i = 1; catch > 0; i *= 2, catch--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
