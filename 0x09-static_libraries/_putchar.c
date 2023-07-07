#include <unistd.h>

/**
 * _putchar - writes the chacter c to stdout
 * @c: the chacter to print
 * Return: returns 0 on success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
