#include "main.h"
/**
 * flip_bits - finds # of bits that need to be flipped to make new number
 * @n: number one to be flipped
 * @m: number two to be flipped to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k = 0;
	unsigned long int num;

	num = n ^ m;
	while (num)
	{
		k++;
		num &= (num - 1);
	}
	return (k);
}
