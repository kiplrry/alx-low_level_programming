/*
 * size.c
 */
#include <stdio.h>
/**
 * main - Prints the sizes
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int ll;
	float fl;

	printf("Size of a char: %lu byte(s)\n", ((unsigned long)sizeof(c)));
	printf("Size of an int: %lu byte(s)\n", ((unsigned long)sizeof(i)));
	printf("Size of a long int: %lu byte(s)\n", ((unsigned long)sizeof(l)));
	printf("Size of a long long int: %lu byte(s)\n", ((unsigned long)sizeof(ll)));
	printf("Size of a float: %lu byte(s)\n", ((unsigned long)sizeof(fl)));

	return (0);
}