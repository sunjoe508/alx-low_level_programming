#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit for  a given index
 * @n: number to be evaluate
 * @index: index start from 0, of the bit we get
 * Return: Value at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int grip;

	if (index > 64)
		return (-1);

	grip = n >> index;

	return (grip & 1);
}
