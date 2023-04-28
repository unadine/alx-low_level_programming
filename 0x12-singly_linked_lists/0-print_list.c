#include "lists.h"
/**
 * print_list - prints elements of linked list
 * @h: name of linked list input
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		k++;
		h = h->next;
	}
	return (k);
}
