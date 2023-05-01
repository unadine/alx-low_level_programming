#include "lists.h"
/**
 * add_nodeint_end - adds new node to end of linked list
 * @head: start of linked lists
 * @n: new number to add to new node
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *ptr;

	new_n = malloc(sizeof(listint_t));
	ptr = *head;
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_n;
	return (new_n);
}
