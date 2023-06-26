#include<stio.h>

/**
 * _starlen - the beginning of a program that prints the length of a string
 * @s: value to use
 * Return: void
 */
int _strlen(char *s)
{
int len s = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
