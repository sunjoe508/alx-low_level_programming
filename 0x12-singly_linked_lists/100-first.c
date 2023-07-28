#include <stdio.h>

/**
 * bmain - function is to be executed 
 * before the main
 * Return: returns void
 */

void __atribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
