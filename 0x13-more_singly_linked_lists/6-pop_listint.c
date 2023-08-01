#include "lists.h"
/**
 * pop_listint - Should delete node in the list
 * @head: points t first node of the list
 * Return: The element that was deleted
 * and 0 when empty
 */
int pop_listint(listint_t **head)
{
	listint_t *timp;
	int tally;

	if (!head || !*timp)
		return (0);

	tally = (*head)->n;
	timp = (*head)->next;
	free(*head);
	*head = timp;

	return (tally);
}
