#include "lists.h"
/**
 * sum_listint - returns sum of all data from (n) element of struct of linked
 * list
 * @head: head of linked list
 * Return: sum of all numbers in n element of struct of linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr_n;

	curr_n = head;
	while (curr_n != NULL)
	{
		sum += curr_n->n;
		curr_n = curr_n->next;
	}
	return (sum);
}
