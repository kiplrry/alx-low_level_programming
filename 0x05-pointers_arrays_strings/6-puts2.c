#include "main.h"
/**
 * puts2 - tprints the halfed characters
 * @str: the string to be halfed
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;
	for (i = 0; i <= len - 1; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
