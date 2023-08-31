#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of bit to 0 for  given index
 * @n: pointer to decimal number to be apended
 * @index: index position to be apend
 * Return: 1 if it successful , -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;
	unsigned int grip;

	if (index > 64)
		return (-1);
	grip = index;
	for (b = 1; grip > 0; b *= 2, grip--)
		;

	if ((*n >> index) & 1)
		*n -= b;

	return (1);
}
