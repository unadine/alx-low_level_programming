#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input number
 * @index: the index starting from 0 of the bit you want to get
 * Return: value of bit at given index, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	check = n >> index;
	return (check & 1 ? 1 : 0);
}
