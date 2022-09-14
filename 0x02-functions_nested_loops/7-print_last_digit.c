#include "main.h"
/**
 * print_last_digit - prints the last diigit of the int
 * @n: the input int to be checked
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	_putchar(last + '0');

	return (last);
}
