#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the arrays
 * @a: the array
 * @n: the point to be reached
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
