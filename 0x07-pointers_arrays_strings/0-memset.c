#include "main.h"
/**
 * _memset - set to fill a block of memory
 * @s: the starting address of memory
 * @b: the desired value
 * @n: member of bytes that are  to be changed
 * Return: set toAlways value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
