#include "lists.h"
/**
 * add_node - Adds  new node at beginning
 * @head: the head of list
 * @str: the string to be stored in list
 * Return: the address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *sew;
	size_t mchr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (mchr = 0; str[mchr]; mchr++)
		;

	sew->len = mchr;
	sew->next = *head;
	*head = sew;

	return (*head);
}
