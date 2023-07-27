#include <stdio.h>

/**
 * bmain - function to beexecuted before main
 * Return: void
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
