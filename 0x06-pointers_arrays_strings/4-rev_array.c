#include "main.h"
/**
 * reverse_array -reverses an array
 * @n: size of the array
 * @a: the array
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n / 2 - 1; i++)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
