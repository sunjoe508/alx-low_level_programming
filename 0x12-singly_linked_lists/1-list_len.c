#include "lists.h"

/**
 * list _len - returns the number of elements
 * @h: this is the linked list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t neem;

	neem = 0;
	while (h != NULL)
	{
		h = h->next;
		neem++;
	}
	return (neem);
}
