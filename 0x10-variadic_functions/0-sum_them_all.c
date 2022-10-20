#include "variadic_functions.h"
/**
 * sum_them_all - sums the input arguments
 * @n: number of args
 * Return: 0 || sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
		j += va_arg(nums, int);

	va_end(nums);

	return (j);
}
