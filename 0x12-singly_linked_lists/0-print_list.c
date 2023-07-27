#include "lists.h"
/**
 * print_list - this prints all the elements of a linked list
 * @h: this points to the list_t list to print
 * Return: returns the  number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (!h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%zu] %s\n", s, h->str);
		}
		h = h->next;
		s++;
	}

	return (s);
}
