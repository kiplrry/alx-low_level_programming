#include <stdio.h>
#include <unistd.h>
/**
 * main - runs main program
 *
 * Return: 0
 */
int _putchar(char c);
int letter(void);
void print_alphabet(void);

int letter(void)
{
	printf("_putchar\n");

	return (0);
}
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return;
}
int _putchar(char c)

{

		return (write(1, &c, 1));

}
