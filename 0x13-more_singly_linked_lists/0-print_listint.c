#include "lists.h"

/**
 * print_listint - prints all elements of listit
 * @h: the head pointer
 * Return: should return tally
 */
size_t print_listint(const listint_t *h)
{
	size_t tally = 0;
	const listint_t *extant = h;

	while (extant != NULL)
	{
		printf("%d\n", extant->n);
		extant = extant->next;
		tally++;
	}
	return (tally);
}
