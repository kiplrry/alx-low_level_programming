#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @accept: string with accepted characters
 * @s: string to be checked
 * Return: i, which is ssame as number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int flag = 1;

	while (s[i] >= '\0' && flag == 1)
	{
		int j = 0;

		flag = 0;
		while (accept[j] > '\0')
		{
			if (accept[j] == s[i])
				flag = 1;
			j++;
		}
		if (flag == 0)
			break;
		i++;
	}
	return (i);
}
