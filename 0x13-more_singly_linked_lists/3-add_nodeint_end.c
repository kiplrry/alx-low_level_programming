#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of the list
 * @head: pointer to the head of the list
 * @n: int n fo the new node
 * Return: NULL or pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (ptr == NULL)
		return (NULL);

	ptr->next = NULL;
	ptr->n = n;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;

	return (ptr);
}
