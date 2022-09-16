#include "main.h"
/**
 * _isdigit - checks if it si a digit between 0 and 10
 *
 * @c: integer to be checked
 *
 * Return: 0 fail 1 success
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
