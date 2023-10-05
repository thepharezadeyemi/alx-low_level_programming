#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * also duplicate the string
 * @str: input string
 *
 * Return: pointer to the memory allocated
 */
char *_strdup(char *str)
{
	unsigned int a, b;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	ptr = malloc(sizeof(char) * (a + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (b = 0; str[b]; b++)
	{
		ptr[b] = str[b];
	}
	return (ptr);
}

