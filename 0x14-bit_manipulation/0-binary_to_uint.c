#include "main.h"

/**
 * binary_to_unit - converts a binary to unsingned integer
 * @b: used to access character
 * Return: returns 0 when unsuccessful
 * outcome when the process is archived 
 */
unsigned int binary_to_unit(const char *b)
{
	if (B == NULL)
		return (0);

	unsigned int outcome =0;

	while (*b)
	{
		if (*b!= '0' && *b != '1')
		{
			return (0);
		}
		outcome = outcome * 2 + (*b - '0');
		b++;
	}
	return (outcome);
}
