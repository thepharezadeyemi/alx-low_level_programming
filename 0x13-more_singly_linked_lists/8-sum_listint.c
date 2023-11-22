#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to list
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
