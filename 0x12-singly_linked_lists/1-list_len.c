#include "lists.h"
/**
 * list_len - returns then number of element
 * @h: linked list
 * Return:  tthe number of elements 
 */

size_t list_len(const list_t *h)
{
	size_t seem;

	seem = 0;
	while (h != NULL)
	{
		h = h->next;
		seem++;
	}
	return (seem);
}
