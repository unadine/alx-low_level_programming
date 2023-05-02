#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * **of a listint_t linked list.
 * @head: pointer to head node
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr_n;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	curr_n = *head;
	for (i = 0; i < index - 1 && curr_n != NULL; i++)
	{
		curr_n = curr_n->next;
	}
	if (curr_n == NULL || curr_n->next == NULL)
		return (-1);
	ptr = curr_n->next;
	curr_n->next = ptr->next;
	free(ptr);
	return (1);
}
