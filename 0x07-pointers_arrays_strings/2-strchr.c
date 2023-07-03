#include "main.h"
/**
 * _strchr - this is the entry point
 * @s: the input
 * @c: the second input
 * Return: returns 0 when successful
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return(0);
}
