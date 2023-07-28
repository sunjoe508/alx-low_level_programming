#include "lists.h"
/**
 * free_list - to Free the list
 * @head: the head of the List
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *crrent;

	while ((crrent = head) != NULL)
	{
		head = head->next;
		free(crrent->str);
		free(crrent);
	}
}
