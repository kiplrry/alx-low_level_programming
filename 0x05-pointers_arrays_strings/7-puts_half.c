#include "main.h"
/**
 * puts_half - prints the last half
 * @str: string to be halfed
 */
void puts_half(char *str)
{
	int i = 0;
	int tmp = 0;
	int len = 0;

	while (str[i++])
		len++;
	if (len % 2 == 0)
		tmp = (len) / 2;
	else
		tmp = (len - 2) / 2;
	for (i = tmp; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
