#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: the linked list
 * Return: returns the nmber of elements
 */

size_t print_list(const list_t *h)
{
	size_t seem;

	seem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		seem++;
	}
	return (seem);
}
