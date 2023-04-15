#include "main.h"
#include <stdio.h>
/**
 * recursion_helper - find square root
 * @n: main number
 * @i: divisor to check if its a square root
 * Return: natural square root or -1
 */
int recursion_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (recursion_helper(n, i + 1));
}
/**
 * _sqrt_recursion - input
 * @n: number to check for natural square root
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (recursion_helper(n, 0));
}




