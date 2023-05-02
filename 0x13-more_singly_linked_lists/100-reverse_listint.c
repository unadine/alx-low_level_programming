#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to head node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next = NULL;
	listint_t *curr_n = *head;

	while (curr_n != NULL)
	{
		next = curr_n->next;
		curr_n->next = prev_node;
		prev_node = curr_n;
		curr_n = next;
	}
	*head = prev_node;
	return (*head);
}
