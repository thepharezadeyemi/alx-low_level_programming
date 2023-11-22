#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add node to list
 * @head: head pointer
 * @n: new integer
 * Return: pointer  if success or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;

	return (0);
}
