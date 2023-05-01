#include "lists.h"
/**
 * free_listint2 - frees a linked list.
 * **sets the head to NULL
 * @head: head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
