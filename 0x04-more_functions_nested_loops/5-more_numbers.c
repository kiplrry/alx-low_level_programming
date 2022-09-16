#include "main.h"
/**
 * more_numbers - prints the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int r;
	int d;

	for (r = 0; r <= 10; r++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d < 9)
				_putchar((d / 10) + '0');
			_putchar((d % 10) + 0);
		}
		_putchar('\n');
	}
}
