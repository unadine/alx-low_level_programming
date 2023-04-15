#include "main.h"
#include <stdio.h>
/**
 * is_prime_number_helper - helper to check if number is prime
 * @n: number to check
 * @i: divisor
 * Return: truth statement - boolean
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, i + 1));
}
/**
 * is_prime_number - checks if # is prime
 * @n: number to check
 * Return: boolean
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
