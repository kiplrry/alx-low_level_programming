#include "lists.h"
/**
 * get_nodeint_at_index - get node at n
 * @head: head pointer
 * @index: index to retun
 * Return: NULL or pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;

	for (; r < index; r++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
