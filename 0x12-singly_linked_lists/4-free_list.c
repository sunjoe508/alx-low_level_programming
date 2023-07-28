#include "lists.h"
/**
 * free_list - shhould frees a list
 * @head: the head of linked list
 * Return: void return
 */

void free_list(list_t *head)
{
	list_t *Now;

	while ((*Now = head) != NULL)
	{
		head = head->next;
		free(*Now->str);
		free(*Now);
	}
}
