#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: size of the diagonal
 */
void print_diagonal(int n)
{
	int d;
	int r;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (d = 0; d <= r; d++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
