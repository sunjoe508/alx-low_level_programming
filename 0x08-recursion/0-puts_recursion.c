#include "main.h"

/**
*_my_puts_recursion - prints a string recursively
*@s: input string
*Return: void
*/
void _my_puts_recursion(char *s)
{
	if (*s)
	{
		_my_putchar(*s);
		_my_puts_recursion(s + 1);
	}
	else
	{
		_my_putchar('\n');
	}
}
