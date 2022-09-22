#include "main.h"
/**
 * _strncpy - copies string to point n
 * @n: point until to copy
 * @dest: destination to copy to
 * @src: source
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0;
	int i;

	while (src[slen])
		slen++;
	for (i = 0; i < n; i++)
	{
		if (i > slen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
