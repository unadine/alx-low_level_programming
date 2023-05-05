#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: integer to find bit to convert
 * @index: index of bit to convert
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int checkn;
	unsigned int sze;
	unsigned long int k;

	sze = sizeof(unsigned long int) * 8;
	checkn = index;
	if (index > sze)
		return (-1);
	for (k = 1; checkn > 0; k *= 2, checkn--)
	;
	if ((*n >> index) & 1)
		*n -= k;
	return (1);
}
