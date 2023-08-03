#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to number to change
 * @index: position to change
 * Return: 1 if it work
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int grip;

	if (index > 64)
		return (-1);
	grip = index;
	for (i = 1; grip > 0; i *= 2, grip--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
