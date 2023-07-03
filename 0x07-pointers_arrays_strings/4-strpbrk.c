#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - print the consecutive character of s1 that are inn s2
 * @s: source string
 * @accept: the seaching string
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}

