#include "main.h"

/**
 * get_endianness - check for  endiannes
 * Return: 0 if big and  1 if little
 */
int get_endianness(void)
{
	int timp;

	timp = 1;
	if (*(char *)&timp == 1)
		return (1);
	else
		return (0);
}
