#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory blocks
 * @size: size of element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	size_t c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (c = 0; c < (nmemb * size); c++)
		a[c] = 0;
	return (a);
}
