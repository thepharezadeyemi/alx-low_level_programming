#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: input
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
	{
		exit(98);
	}
	return (pntr);
}
