#include "main.h"
/**
 * _strncat - concatnates src to dest up to n
 * @src: source
 * @dest: destination
 * @n: the number of bytes to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen, slen, len, i;

	slen = dlen = len = 0;

	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (n > slen)
		n = slen;
	for (i = dlen; i < n + dlen; i++)
	{
		dest[i] = src[len];
		len++;
	}
	dest[n + dlen] = '\0';
	return (dest);
}
