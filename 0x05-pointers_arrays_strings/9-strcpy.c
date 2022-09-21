#include "main.h"
/**
 * _strcpy - copies src to dest
 * @src: char to be copied
 * @dest: destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int x = 0;

	while (src[len])
		len++;
	for ( ; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
