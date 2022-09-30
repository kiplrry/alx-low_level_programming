#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print the arguments passed to the function
 * @argc: number of arguments passed
 * @argv: array containing argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int sum = 0;
		int i = 1;
		int digit = 0;

		for ( ; i < argc; i++)
		{
			for ( ; argv[i][digit]; digit++)
			{
				if (argv[i][digit] < '0' || argv[i][digit] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
