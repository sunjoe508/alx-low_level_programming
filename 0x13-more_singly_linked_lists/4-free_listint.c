#include "lists.h"
/**
 * free_listint - frees list
 * @head: list to clear
 */
void free_listint(listint_t *head)
{
	listint_t *extant = head;

	while (extant != NULL)
	{
		listint_t *timp = extant;

		extant = extant->next;
		free(timp);
	}
}
