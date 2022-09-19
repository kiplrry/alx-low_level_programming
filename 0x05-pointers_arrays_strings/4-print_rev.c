#include "main.h"
/**
 * print_rev - prints reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\n')
		len++;
	while (len >= 0)
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}
