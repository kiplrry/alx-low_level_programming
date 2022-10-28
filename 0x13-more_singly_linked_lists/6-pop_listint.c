#include "lists.h"
/**
 * pop_listint - pops a head of a list
 * @head: list to be affected
 * Return: int n of head
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (*head == NULL)
		return (0);
	ptr = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(ptr);

	return (num);
}
