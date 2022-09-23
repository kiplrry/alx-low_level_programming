#include "main.h"
/**
 * string_toupper - converts string to uppercase
 * @str: string to be converted
 * Return: str
 */
char *string_toupper(char *str)
{
	int j = 0;

	while (str[j])
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] -= 32;
		j++;
	}
	return (str);
}
