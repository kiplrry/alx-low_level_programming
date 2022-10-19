#include "function_pointers.h"
/**
 * array_iterator - iterates through an array affecting the function action
 * @array: array to be affected
 * @size: size of the array
 * @action: function to the members of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
