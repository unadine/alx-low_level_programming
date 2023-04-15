#include "main.h"
#include <stdio.h>
/**
 * check_palindrome_helper - check if numbers are equal
 * @s: input string
 * @prev: beginning integer
 * @last: ending integer
 * Return: boolean
 */
int check_palindrome_helper(char *s, int prev, int last)
{
	if (prev >= last)
	{
		return (1);
	}
	if (s[prev] != s[last])
	{
		return (0);
	}
	return (check_palindrome_helper(s, prev + 1, last - 1));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: input string
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_palindrome_helper(s, 0, len - 1));
}
