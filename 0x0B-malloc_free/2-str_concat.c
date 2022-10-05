#include "main.h"
/**
 * str_concat - concat two strings
 * @s1: pointer to first strimg
 * @s2: pointer to seecond string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;
	size_t len1;
	size_t len2;

	if (s1 == NULL && s2 == NULL)
		return (str_concat("", ""));
	if (s1 == NULL)
		return (str_concat("", s2));
	if (s2 == NULL)
		return (str_concat(s1, ""));

	len1 = strlen(s1);
	len2 = strlen(s2) + 1;
	s = malloc(len1 + len2);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1];
	}
	return (s);
}
