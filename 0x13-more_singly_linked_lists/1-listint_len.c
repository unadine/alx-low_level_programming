#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: input head of list
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int k = 0;
	const listint_t *pth;

	pth = h;
	while (pth != NULL)
	{
		k++;
		pth = pth->next;
	}
	return (k);
}
