#include "lists.h"
/**
 * add_node - adds new node at the beginning
 * @head: the head of linked list
 * @str: the string to be store in the list
 * Return: should give an address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t mchr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (mchr = 0; str[mchr]; mchr++)
		;
	new->len = mchr;
	new->next = *head;
	*head = new;

	return (*head);
}
