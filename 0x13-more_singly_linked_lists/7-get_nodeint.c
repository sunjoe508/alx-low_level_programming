#include "lists.h"
/**
 * get_nodeint_at_index - prints certain nodes in the list
 * @index: the locatio node to print
 * @head: pointer to the first node
 * Return: on fail NULL ,else node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *timp = head;
	unsigned int j = 0;

	while (timp && j < index)
	{
		timp = timp->next;
		j++;
	}
	return (timp ? timp : NULL);
}
