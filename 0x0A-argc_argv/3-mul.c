#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print the multiplication of the arguments
 * @argc: number of arguments passed
 * @argv: array containing argument strings
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	int mul = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
		printf("%d\n", mul);
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
