#include "lists.h"
/**
 * add_node_end - adds a new node to the end of linked list
 * @head: pointer to a first element of a list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_strng;
	list_t *c;
	list_t *new_n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);
	new_strng = strdup(str);
	if (new_strng == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->str = new_strng;
	new_n->len = strlen(new_strng);
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	c = *head;
	while (c->next != NULL)
		c = c->next;
	c->next = new_n;
	return (new_n);
}
