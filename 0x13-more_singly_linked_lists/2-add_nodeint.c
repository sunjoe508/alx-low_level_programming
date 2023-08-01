#include "lists.h"
/**
 * add_nodeint - places a new node in the list
 * @n: the element data to be in the new node
 * @head: the first node pointer
 * Return: returns NULL on fail and
 * nobel_node on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *novel_node;

	novel_node = malloc(sizeof(listint_t));
		if (novel_node == NULL)
			return (NULL);

	novel_node->n = n;
	novel_node->next = *head;
	*head = novel_node;

	return (novel_node);
}

