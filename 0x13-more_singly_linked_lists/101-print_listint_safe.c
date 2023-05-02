#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: beginning of linked list
 * Return: number of elements in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	int k;
	const listint_t *ch_c, *ch_h;

	ch_c = head;
	if (ch_c == NULL)
		exit(98);

	k = 0;
	while (ch_c != NULL)
	{
		ch_h = ch_c;
		ch_c = ch_c->next;
		k++;
		printf("[%p] %d\n", (void *)ch_h, ch_h->n);

		if (ch_h < ch_c)
		{
			printf("-> [%p] %d\n", (void *)ch_c, ch_c->n);
			break;
		}
	}
	return (k);
}
