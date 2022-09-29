#include "main.h"
/**
 * _pow_recursion - returns the power of an integer
 * @x: integer to find the power of
 * @y: the power of the integer
 * Return: the result of power  or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
