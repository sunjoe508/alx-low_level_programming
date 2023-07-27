#include<stdio.h>
#include "lists.h"

/**
 * print_list - this is  too print the elements of a linked list
 * @h: This pointes to the list_t in the list to print
 * Return: returns the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
