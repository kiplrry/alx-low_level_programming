#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the minimum number of coins needed for change
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 if success || 1 if fail
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int rem, total;
		int m = atoi(argv[1]);

		rem = total = 0;
		if (m > 0)
		{
			total += m / 25;
			rem = m % 25;
			total += rem / 10;
			rem = rem % 10;
			total += rem / 5;
			rem = rem % 5;
			total += rem / 2;
			total += rem % 2;
		}
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
