#include "main.h"
/**
 * _abs - computes the absolut of an integer
 *@n: the integer to be computed
 *
 * Return: the absolute
 */
int _abs(int n)
{
	int ab;

	if (n < 0)
	{
		ab = n * -1;
	}
	else
	{
		ab = n;
	}
	return (ab);
}
