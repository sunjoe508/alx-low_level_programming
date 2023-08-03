#include "main.h"

/**
 * binary_to_uint - converts binary numbers
 * @b: the charcter string
 * Return: returns theconverted decimal number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int utter, punch;
	int timp;

	if (b == NULL)
		return (0);

	for (timp = 0; b[timp]; timp++)
	{
		if (b[timp] != '0' && b[timp] != '1')
			return (0);
	}

	for (punch = 1, utter = 0, timp--; timp >= 0; timp--, punch *= 2)
	{
		if (b[timp] == '1')
			utter += punch;
	}

	return (utter);
}
