#include "main.h"
#include<stdio.h>
/**
 * _Puts - the program to print a string to a standard out put begins
 * @str: the value to evaluate
 * Return: void
 */
void _puts(char *str)
{
int l = 0;
while (*(str + 1) != '\0')
{
_Putchar(str [1]);
}
_putchar('\n');
}
