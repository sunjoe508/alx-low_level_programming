#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: the number to print in binary form
 */
void print_binary(unsigned long int n)
{
	unsigned long int timp;
	int relocate;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (timp = n, relocate = 0; (timp >>= 1) > 0; relocate++)
		;

	for (; relocate >= 0; relocate--)
	{
		if ((n >> relocate) & 1)
			printf("1");
		else
			printf("0");
	}
}
