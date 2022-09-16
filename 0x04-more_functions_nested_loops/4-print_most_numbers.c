#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	int r;

	if ((r != 2) && (r != 4))
	{
		for (r = 0; r <= 9; r++)
		{
			_putchar(r + '0');
		}
		_putchar('\n');
	}
}
