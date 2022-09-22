#include "main.h"
/**
 * _strcmp - compares the strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, -15 when s1[i] < s2[i], 15 s1[i] > s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int flen, slen, i, ret;

	flen = slen = i = 0;
	while (s1[flen])
		flen++;
	while (s2[slen])
		slen++;
	if (flen < slen)
		flen = slen;
	for ( ; i < flen; i++)
	{
		if (s1[i] < s2[i])
		{
			ret = -15;
			break;
		}
		else if (s1[i] > s2[i])
		{
			ret = 15;
			break;
		}
		else
			ret = 0;
	}
	return (ret);
}

