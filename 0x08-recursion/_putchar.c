#include <unistd.h>
/**
 * _putchar - writes the chacter c to stdout
 * @c: the chacer to print
 * Return: retun 1 when successful
 * on error, -1 is returned, and error is set appropriately
 */
int _puttchar(char c)
{
return (write(1, &c, 1));
}
