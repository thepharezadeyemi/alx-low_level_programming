#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of a linked list
 * @head: pointer to beginning of list
 * @index: index of node
 * Return: 1 if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *trns;
	listint_t *node;

	trns = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && trns != NULL && index != 0; a++)
		trns = trns->next;
	if (trns == NULL)
		return (-1);
	if (index == 0)
	{
		node = trns->next;
		free(trns);
		*head = node;
	}
	else
	{
		if (trns->next == NULL)
			node = trns->next;
		else
			node = trns->next->next;
		free(trns->next);
		trns->next = node;
	}
	return (1);
}
