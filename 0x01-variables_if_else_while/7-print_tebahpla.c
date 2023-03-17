#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a' ; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
