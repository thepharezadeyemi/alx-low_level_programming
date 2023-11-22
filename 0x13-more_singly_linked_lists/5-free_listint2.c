#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees list of nodes
 * @head: pointer to first element
 */
void free_listint2(listint_t **head)
{
	listint_t trns;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		trns = (*head)->next;
		free(*head);
		*head = trns;
	}
	free(*head);
	*head = NULL;
}
