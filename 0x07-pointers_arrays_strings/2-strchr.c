#include "main.h"
/**
 * _strchr - checks the occurrence of a char in a string
 * @s: string to be checked
 * @c: char being checked
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		else
			p = '\0';
		i++;
	}
	return (p);
}
