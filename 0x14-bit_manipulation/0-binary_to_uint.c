#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary into  unsigned int
 * @b: string of type char
 * Return: converted number and  0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, potential;
	int lin;

	if (b == NULL)
		return (0);

	for (lin = 0; b[lin]; lin++)
	{
		if (b[lin] != '0' && b[lin] != '1')
			return (0);
	}

	for (potential = 1, sum = 0, lin--; lin >= 0; lin--, potential *= 2)
	{
		if (b[lin] == '1')
			sum += potential;
	}

	return (sum);
}
