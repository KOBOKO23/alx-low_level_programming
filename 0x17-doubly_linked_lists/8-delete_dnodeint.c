#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to head of linked list
 * @index: index at which to delete node
 * Return: 1 (success), -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	new_2 = *head;
	if (index == 0)
	{
		*head = new_2->next;
		if (new_2->next != NULL)
		{
			new_2->next->prev = NULL;
		}
		free(new_2);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (new_2->next == NULL)
			return (-1);
		new_2 = new_2->next;
	}
	new_2->prev->next = new_2->next;
	if (new_2->next != NULL)
		new_2->next->prev = new_2->prev;
	free(new_2);
	return (1);
}
