#include "main.h"
/**
 * leet - converts certain leters to  numbers
 * @str: string to be converted
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}

		i++;
	}
	return (str);
}
