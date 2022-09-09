#include <stdio.h>
/**
 * main - main program
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');

	return (0);
}
