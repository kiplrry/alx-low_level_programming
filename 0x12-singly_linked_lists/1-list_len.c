#include "lists.h"
/**
 * list_len - checks len of a linked list
 * @h: list to be checked
 * Return: num
 *
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
