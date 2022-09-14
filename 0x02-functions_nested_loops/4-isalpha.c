#include "main.h"
/**
 * _isalpha - checks if character is an alphabet
 *
 * @c:character to be checked
 *
 * Return: 1 if success and 0 if fail
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
