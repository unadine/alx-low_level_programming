#include "lists.h"
/**
 * print_list - prints elements of linked list
 * @h: name of linked list input
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr_h = h;
	int k = 0;

	while (ptr_h != NULL)
	{
		if (ptr_h->str != NULL)
			printf("[%d] %s\n", ptr_h->len, ptr_h->str);
		else
			printf("[0] (nil)\n");
		ptr_h = ptr_h->next;
		k++;
	}
	return (k);
}
