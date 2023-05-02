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

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next;
	}
	*head = prev_node;
	return (*head);
}
