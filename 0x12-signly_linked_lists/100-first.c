#include <stdio.h>

/**
 * bmain - executed before the main
 * Return: returns void
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
