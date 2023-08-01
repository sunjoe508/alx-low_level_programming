#include "lists.h"
/**
 * free_listint2 - should free the list
 * @head: points to the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *extant = *head;
	listint_t *novel_node;

	if (head == NULL)
		return;
	while (extant != NULL)
	{
		novel_node = extant->next;
		free(extant);
		extant = novel_node;
	}
	*head = NULL;
}
