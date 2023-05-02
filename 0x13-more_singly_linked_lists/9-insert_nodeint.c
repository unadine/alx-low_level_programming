#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head node
 * @idx: the index of the list where the new node should be added
 * @n: value of the new node to be added
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_n;
	listint_t *curr_n;

	if (head == NULL)
		return (NULL);
	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	curr_n = *head;
	for (i = 0; i < idx - 1 && curr_n != NULL; i++)
	{
		curr_n = curr_n->next;
	}
	if (curr_n == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->next = curr_n->next;
	curr_n->next = new_n;
	return (new_n);
}
