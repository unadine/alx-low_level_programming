#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 * @head: head of linked list
 * Return: data from deleted linked list
 */
int pop_listint(listint_t **head)
{
	int k;
	listint_t *cur_n;

	if (*head == NULL)
	{
		return (0);
	}
	cur_n = *head;
	k = cur_n->n;
	*head = cur_n->next;
	free(cur_n);
	return (k);
}
