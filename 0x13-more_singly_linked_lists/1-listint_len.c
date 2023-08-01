#include "lists.h"

/**
 * listint_len - should print number of elements
 * @h: the first node header
 * Return: should return tally
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *extant = h;
	size_t tally = 0;

	while (extant != NULL)
	{
		extant = extant->next;
		tally++;
	}
	return (tally);
}
