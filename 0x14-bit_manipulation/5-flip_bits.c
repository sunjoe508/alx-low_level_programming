#include "main.h"
/**
* flip_bits - flips bits converingt one number to another number
 * @n: first number
 * @m: second number
 * Return: the tally
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int timp;
	int tally;

	timp = n ^ m;
	tally = 0;

	while (timp)
	{
		tally++;
		timp &= (timp - 1);
	}

	return (tally);
}
