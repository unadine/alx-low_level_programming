#include "main.h"
/**
 * print_number - prints number
 * @n:integer to convert to character
 *
 */
void print_number(int n)
{
	unsigned int a;
	int mult = 1;
	unsigned int aCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	a = n;
	aCount = n;

	while (aCount > 0)
	{
		aCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		mult *= 10;

	for (i = 0; i < c; i++)
	{
		_putchar((a / mult) + '0');
		abs = a % mult;
		mult /= 10;
	}
}
