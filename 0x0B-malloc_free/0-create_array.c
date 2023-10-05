#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array of int
 * @c: to store the strings of character
 *
 * Reaturn: a pointer to character c
 */
char *create_array(unsigned int size, char c);
{
	unsigned int i;
	char *ptr;
	
	for (i = 1; i <= size; i++)
	{
		ptr(i) = c;
	}

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL)
	}
	return (ptr);
}
