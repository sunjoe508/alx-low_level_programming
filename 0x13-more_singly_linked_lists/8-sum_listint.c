#include "lists.h"

/**
 * sum_listint - returns the sum of all ellements in a list
 * @head:the pointer to first node in the list
 * Return:the end sum
 */
int sum_listint(listint_t *head)
{
	listint_t *timp = head;
	int tally = 0;

	while (timp)
	{
		tally += timp->n;
		timp = timp->next;
	}
	return (tally);
}
