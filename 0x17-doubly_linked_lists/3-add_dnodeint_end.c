#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *new_2 = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (new_2)
	{
		while (new_2->next)
			new_2 = new_2->next;
		new->prev = new_2;
		new_2->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
