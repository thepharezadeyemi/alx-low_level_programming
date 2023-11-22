#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *trns;

	while ((trns = head) != NULL)
	{
		head = head->next;
		free(trns);
	}
}
