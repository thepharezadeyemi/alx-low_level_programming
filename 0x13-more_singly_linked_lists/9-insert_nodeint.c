#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * create_new_node - creates new node
 * @n: data of the node
 * Return: pointer to node
 */
listint_t *create_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list
 * @idx: index of list
 * @n: data of the newly created node
 * Return: pointer to newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *old;
	listint_t *trns;
	listint_t *new;

	trns = *head;
	if (head == NULL)
		return (NULL);
	new = create_new_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
		*head = new;
	for (c = 0; c < idx - 1 && trns != NULL && idx != 0; c++)
		trns = trns->next;
	if (trns == NULL)
		return (NULL);
	if (idx == 0)
		new->next = trns;
	else
	{
		old = trns->next;
		trns->next = new;
		new->next = old;
	}
	return (new);
}
