#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips the  bits to convert one number to another
 * @n: the first first number
 * @m: second number to convert 
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int deff;
	int check;

	deff = n ^ m;
	cheke = 0;

	while (deff)
	{
		check++;
		deff &= (deff - 1);
	}

	return (check);
}
