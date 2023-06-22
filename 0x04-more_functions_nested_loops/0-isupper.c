#include "main.h"
/***
 * _isupper -looks for uppercase
 * @cc: the character tocheck
 * Return: 1 when uppercase 0 if anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
