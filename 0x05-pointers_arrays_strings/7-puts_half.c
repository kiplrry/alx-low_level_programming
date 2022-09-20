#include "main.h"
/**
 * puts_half - prints the last half
 * @str: string to be halfed
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;
	if (len % 2 == 0)
		i = (len) / 2;
	else
		i = (len - 1) / 2;
	for (i; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
