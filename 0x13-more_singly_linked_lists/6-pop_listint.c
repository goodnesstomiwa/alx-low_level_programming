#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: head of a list.
 *
 * Return: ...
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int next_node = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		next_node = (*head)->next_node;
		free(*head);
		*head = new_head;
	}

	return (next_node);
}
