#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representations
 * @n: decimal number to be print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int timp;
	int turns;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (timp = n, turns = 0; (timp >>= 1) > 0; turns++)
		;

	for (; turns >= 0; turns--)
	{
		if ((n >> turns) & 1)
			printf("1");
		else
			printf("0");
	}
}
