#include "lists.h"
/**
 * free_list - fres a list
 * @head: the head of linked list.
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
