#include <stdio.h>
/**
 * main - function to print the arguments passed to the function
 * @argc: number of arguments passed
 * @argv: array containing argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
