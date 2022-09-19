#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: string to be checked
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int temp = 0;

	while (*s++)
		temp++;

	return (temp);
}
