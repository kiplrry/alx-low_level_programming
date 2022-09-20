#include "main.h"
/**
 * print_rev - prints reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char rev;

	while (s[i++])
		len++;
	for (i = len - 1; i >= len / 2; i--)
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
