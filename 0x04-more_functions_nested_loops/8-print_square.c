#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; row <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
