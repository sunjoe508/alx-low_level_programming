#include "lists.h"
/**
 * add_nodeint_end - adds a node at the of thelist
 * @n: the element to add in the node
 * @head: the first node pointer
 * Return: Returns NULL on fail and
 * novel_node on success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *novel_node;

	novel_node = malloc(sizeof(listint_t));
	if (novel_node == NULL)
		return (NULL);
	novel_node->n = n;
	novel_node->next = NULL;
	if (*head == NULL)
		*head = novel_node;
	else
	{
		listint_t *extant_node = *head;
	while (extant_node->next != NULL)
		extant_node = extant_node->next;
	extant_node = novel_node;
	}

	return (novel_node);
}
