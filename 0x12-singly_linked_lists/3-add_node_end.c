#include "lists.h"

/**
 * add_node_end - Adds new node at end
 * @head: the head of linked list
 * @str: is string to be stored in  list
 * Return: the address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *sew, *temp;
	size_t mchr;

	sew = malloc(sizeof(list_t));
	if (sew == NULL)
		return (NULL);

	sew->str = strdup(str);

	for (mchr = 0; str[mchr]; mchr++)
		;

	sew->len = mchr;
	sew->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = sew;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = sew;
	}

	return (*head);
}
