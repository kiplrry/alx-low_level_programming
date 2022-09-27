#include "main.h"
/**
 * _memcpy - copies n number of bytes from source to destination location
 * @src: source
 * @dest: destination
 * @n: number of the bytes
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	if (i > 0)
	{
		int j;

		for (j = 0; j < i; j++)
			dest[j] = src[j];
	}
	return (dest);
}
