#include "lists.h"
/**
 * listint_len - funtion to get elements of a list
 * @h: pointer to the list being checked
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}

