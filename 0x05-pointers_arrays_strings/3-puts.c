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
while (*(str + l) != '\0')
{
_putchar(str [l]);
l++;
}
_putchar('\n');
}
