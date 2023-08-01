#include "lists.h"

/**
 * delete_nodeint_at_index -erases a  node in a list in given location
 * @head: the link to first node  in alist
 * @index: the location  of  node to delete
 * Return: 1 on success) and  -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *timp = *head;
	listint_t *extant = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(timp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!timp || !(timp->next))
			return (-1);
		timp = timp->next;
		j++;
	}


	extant = timp->next;
	timp->next = extant->next;
	free(extant);

	return (1);
}
