#include "main.h"
/**
 * _islower - checks if letter is lowercase
 * @c: the character to be checked
 * Return: 1 if successful 0 if fail
 */
int _islower(int c)
{
	int flag = 0;
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == c)
		{
			flag = 1;
		}
	}
	return (flag);
}
