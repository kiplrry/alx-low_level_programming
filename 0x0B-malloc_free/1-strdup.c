#include "main.h"
/**
 * _strdup - copies string to an allocated memory
 * @str: string to be copied
 * Return: pointer to the allocated memory with string copy || NULL
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int size = sizeof(char) * strlen(str);

	s = malloc(size);

	if (s == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = str[i];

	return (s);
}
