#include "lists.h"

/**
 * add_node_end - adds new node at end
 * of a list_t list
 * @head: the head of linked list
 * @str: this is the string to store
 * in the list.
 * Return: returns the address of head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t mchr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (mchr = 0; str[mchr]; mchr++)
		;

	new->len = mchr;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
