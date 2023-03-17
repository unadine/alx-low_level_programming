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

	for (x = 'a'; x <= 'z' ; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
