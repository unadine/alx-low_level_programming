#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: input number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int k;

	for (mask = n, k = 0; (mask >>= 1) > 0; k++)
		;
	for (; k >= 0; k--)
	{
		if ((n >> k) & 1)
			printf("1");
		else
			printf("0");
	}
}
