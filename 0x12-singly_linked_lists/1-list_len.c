#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: name of linked list input
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
    int k = 0;
    while (h != NULL)
    {
        k++;
        h = h->next;
    }
    return (k);
}
