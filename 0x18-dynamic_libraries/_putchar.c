#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Return: if success should return 1
 * if error sould return -1,if error is set well
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
