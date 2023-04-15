#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - input
 * @n: number to check for natural square root
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	int a;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	for (a = 1; a * a <= n; a++)
	{
	}
	a--;
	if (a * a == n)
	{
		return (a);
	}
	return (-1);
}

