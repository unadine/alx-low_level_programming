#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i;
	int j;
	int div1;
	int mod1;
	int div2;
	int mod2;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			div1 = i / 10;
			mod1 = i % 10;
			div2 = j / 10;
			mod2 = j % 10;

			putchar(div1 + '0');
			putchar(mod1 + '0');
			putchar(' ');
			putchar(div2 + '0');
			putchar(mod2 + '0');

			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
