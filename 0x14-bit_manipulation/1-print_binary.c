#include "main.h"

/**
 * print_binary - should prit binarry reprsentation of numbers
 * @n: passes desired number as an argument
 * Return: return is void
 */
void print_binary(unsigned long int n)
{
	int extent = sizeof(unsigned long int) * 8;

	for (int b = extent - 1; b >= 0; b--)
	{
		unsigned log int visor = 1UL << b;
		putchar((n & visor) ? '1' : '0');
	}
}
/**
 * main - entry point of the program
 * Return: retturns zero 0
 */
int main(void)
{
	unsigned long int num = 34;

	printf("representation in binary %lu; ", num);
	print_binary(num);
	putchar('\n');
	return (0);
}
