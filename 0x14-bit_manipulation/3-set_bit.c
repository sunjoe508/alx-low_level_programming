#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: decimal number passed bymlinker
 * @index: index position to change from 0
 * Return: 1 ifsuccessful and  -1 if  failr
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;

	if (index > 64)
		return (-1);

	for (q = 1; index > 0; index--, q *= 2)
		;
	*n += q;

	return (1);
}
