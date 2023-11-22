#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count the number of elements in the list
 * @h: head pointer
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		h = h->next;
	}
	return (cnt);
}
