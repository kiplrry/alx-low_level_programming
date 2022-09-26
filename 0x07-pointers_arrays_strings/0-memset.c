#include "main.h"
/**
 * _memset - copies a byte of data to n number of location from  s
 * @s: initial memory location
 * @b: byte to be copied
 * @n: size
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = n;

	if (i > 0)
	{
		int j;

		for (j = 0; j < i; j++)
			s[j] = b;
	}
	return (s);
}
