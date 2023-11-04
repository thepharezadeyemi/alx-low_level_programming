#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: initial pointer to memory
 * @old_size: initial size of memory allocated
 * @new_size: new size allocated
 * Return: the pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	size_t c, max = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	a = malloc(new_size);
	{
		if (a == NULL)
			return (NULL);
	}
	if (new_size > old_size)
		max = old_size;
	for (c = 0; c < max; c++)
		a[c] = old[c];
	free(ptr);
	return (a);
}
