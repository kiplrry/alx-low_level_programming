#include "main.h"
/**
 * _strcat - concats the second char string to the first
 * @src: the source string
 * @dest: the destination string
 * Return: the dest
 */
char *_strcat(char *dest, char *src)
{
	int slen, dlen, len, i;

	slen = dlen = len = 0;

	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	for (i = dlen; i < slen + dlen; i++)
	{
		dest[i] = src[len];
		len++;
	}
	dest[slen + dlen] = '\0';
	return (dest);
}
