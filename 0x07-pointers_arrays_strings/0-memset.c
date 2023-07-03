#include "main.h"
/**
 * _memset - fills the block memory with with constant byte
 * @s: the beginning address of the memory
 * @b: the value which is  of value
 * @n: memberof bytes tobe altered
 * Return: returns the value always
 */
char *_memset(char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i)= b;
i++;
}
return (s);
}
