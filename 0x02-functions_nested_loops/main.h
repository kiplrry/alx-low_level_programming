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
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
int _putchar(char c)

{

		return (write(1, &c, 1));

}
