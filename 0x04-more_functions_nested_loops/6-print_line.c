#include "main.h"
/**
 * print_line - prints a line
 * @n: parameter integer
 */
void print_line(int n)
{
	for (n -= 1; n >= 0; n--)
	{
		_putchar('_');
	}
}
