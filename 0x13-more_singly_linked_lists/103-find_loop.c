#include "lists.h"
/**
 * find_listint_loop - finds the loop inside of a linked list
 * @head: start of linked list
 * Return: address of node where loop begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_h;
	listint_t *ch;

	ptr_h = head;
	ch = head;
	while (ch && ch->next)
	{
		ptr_h = ptr_h->next;
		ch = ch->next->next;
		if (ptr_h == ch)
		{
			ptr_h = head;
			while (ptr_h != ch)
			{
				ptr_h = ptr_h->next;
				ch = ch->next;
			}
			return (ch);
		}
	}
	return (NULL);
}
