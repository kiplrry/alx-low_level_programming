#include  "function_pointers.h"
/**
 * int_index - function to find index of compared int
 * @array: array with members to be compared
 * @size: sixe of the array
 * @cmp: function to comparem
 * Return: -1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);
	while (size-- > 0)
	{
		if (cmp(*array) == 1)
			return (i);
		i++;
		array++;
	}

	return (-1);
}
