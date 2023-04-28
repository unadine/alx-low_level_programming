#include "lists.h"
/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	char *new_strng;

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
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
