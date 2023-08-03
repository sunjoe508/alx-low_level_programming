#include "main.h"
/**
 * get_bit - get the value of bit at given location
 * @n: the number to evaluate
 * @index: index from 0
 * Return: Value of bit at index and -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int timp;

	if (index > 64)
		return (-1);

	timp = n >> index;

	return (timp & 1);
}
