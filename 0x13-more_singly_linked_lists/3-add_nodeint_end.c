#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: pointer to head pointer
 * @n: data to be added to list
 * Return: pointer of new element, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *trns;

	(void)trns;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	trns = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (trns->next != NULL)
		{
			trns = trns->next;
		}
		trns->next = new;
	}
	return (*head);
}
