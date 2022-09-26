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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
