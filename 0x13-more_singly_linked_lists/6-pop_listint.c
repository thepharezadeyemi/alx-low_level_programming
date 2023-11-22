#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to list
 * Return: head node data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *trns;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	trns = *head;
	*head = (*head)->next;
	free(trns);
	return (n);
}
