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
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		head = head->next;
		r++;
		if (r == index + 1)
			break;
	}
	return (NULL);
}
