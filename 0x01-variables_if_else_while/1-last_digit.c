#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - runs the loop
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i < 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is zero", n, i);
	}
	else if ((i < 6) && (i != 0))
	{
		printf("Last digit of %d is %d and is lesser than 5", n, i);
	}

	return (0);
}
