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

	s = malloc(sizeof(char) * strlen(str));

	if (s == NULL || strlen(str) == 0)
		return (NULL);

	for (i = 0; i < sizeof(s); i++)
		s[i] = str[i];

	return (s);
}
