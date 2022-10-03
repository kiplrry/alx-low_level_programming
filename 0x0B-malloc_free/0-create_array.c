#include "main.h"
/**
 * create_array - creates an array and initializes it
 * @size: sie of the array
 * @c: char to populate the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;



	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
