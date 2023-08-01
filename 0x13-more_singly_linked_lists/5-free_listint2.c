#include "lists.h"
/**
 * free_listint2 - should free the list
 * @head: points to the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *timp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		timp = (*head)->next;
		free(*head);
		*head = timp;
	}
	*head = NULL;
}
