#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array holding int
 * @size: array size
 * @cmp: function pointer
 * Return: -1, if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
