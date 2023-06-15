#include "lists.h"

/**
 * add_dnodeint - This adds new node at the beginning of dlistint_t list
 * @head: This a pointer to the head of dlistint_t list
 * @n: This is data to insert new node
 * Return: Null - If the function fails
 *         Otherwise, the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
