#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a  node in  list
 * @head: pointer to the first node in the list
 * @idx: location where node is to be added
 * @n: element to put  in  new node
 * Return: the link  to new node, NULL when unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *timp = *head;
	listint_t *novel;

	novel = malloc(sizeof(listint_t));
	if (!novel || !head)
		return (NULL);

	novel->n = n;
	novel->next = NULL;

	if (idx == 0)
	{
		novel->next = *head;
		*head = novel;
		return (novel);
	}

	for (j = 0; timp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			novel->next = timp->next;
			timp->next = novel;
			return (novel);
		}
		else
			timp = timp->next;
	}
		return (NULL);
}
