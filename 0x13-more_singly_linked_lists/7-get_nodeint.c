#include "lists.h"
/**
 * get_nodeint_at_index - finds & returns nth node from linked list
 * @head: head of linked list
 * @index: index of the node to be returned
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *curr_n;

	curr_n = head;
	for (k = 0; k < index && curr_n != NULL; k++)
	{
		curr_n = curr_n->next;
	}
	return (curr_n);
}
