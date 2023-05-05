#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to unsigned int
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;
	unsigned int sze;

	sze = sizeof(unsigned long int) * 8;
	if (index > sze)
		return (-1);
	for (k = 1; index > 0; index--, k *= 2)
		;
	*n += k;
	return (1);
}
