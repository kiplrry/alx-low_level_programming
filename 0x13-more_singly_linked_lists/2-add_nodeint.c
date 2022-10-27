#include "lists.h"
/**
 * add_nodeint - adds a node at the front of a list
 * @head: pointer to head of list
 * @n: int data for the neew node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->next = (*head);
	ptr->n = n;

	(*head) = ptr;

	return (ptr);
}
