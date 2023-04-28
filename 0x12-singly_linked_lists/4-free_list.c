#include "lists.h"
/**
 * free_list - frees linked list of all allocated memory
 * @head: beginning of linked list
 * Return: void, only frees memory
 */
void free_list(list_t *head)
{
	list_t *c = head;
	list_t *next;

	while (c)
	{
		next = c->next;
		free(c->str);
		free(c);
		c = next;
	}
}
