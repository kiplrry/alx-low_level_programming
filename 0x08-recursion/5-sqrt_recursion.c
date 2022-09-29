#include "main.h"
/**
 * _sqrt_recursion - gets natural square
 * @n: int to find sqrt for
 * Return: sqrt || -1 if no natural square
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (_sqrt(n, 1, n));
}
/**
 * _sqrt - function using binary seaarch to find sqrt
 * @h: high point
 * @l: low point
 * @N: integer to find sqrt for
 * Return: sqrt || -1
 */
int _sqrt(int h, int l, int N)
{
	int mid = (h + l) / 2;

	if ((h - l) / 2 <= 0)
		return (-1);
	if (mid * mid == N)
		return (mid);
	if (mid * mid <= N)
		return (_sqrt(h, mid, N));
	if (mid * mid >= N)
		return (_sqrt(mid, l, N));
	return (-1);
}
