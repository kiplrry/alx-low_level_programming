#include "main.h"
/**
 * _isupper - checks if a letter is uppercase
 * @c: the input letter
 * Return: 1 if success 0 if fail
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
