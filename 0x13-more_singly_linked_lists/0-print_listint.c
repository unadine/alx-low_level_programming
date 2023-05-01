#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
