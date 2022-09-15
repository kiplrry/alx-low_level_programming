#include "main.h"
/**
 * times_table - calculates the time table
 *
 * Returns: 0
 */
void times_table(void)
{
	int row;
	int col;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			prod = row * col;

			_putchar(',');
			_putchar(' ');
			if ((col * row) < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
