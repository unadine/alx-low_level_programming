#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * @s: input string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	putchar(*s);
}
