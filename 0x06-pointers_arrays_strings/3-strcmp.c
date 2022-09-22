#include "main.h"
/**
 * _strcmp - compares the strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, -15 when s1[i] < s2[i], 15 s1[i] > s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
