#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the intergers in the linked list
 * @h: head pointer to list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}
