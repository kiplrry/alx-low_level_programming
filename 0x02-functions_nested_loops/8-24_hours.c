#include "main.h"
/**
 * jack_bauer - prints the minutes of the day
 *
 * Returns: 0
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 24; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
