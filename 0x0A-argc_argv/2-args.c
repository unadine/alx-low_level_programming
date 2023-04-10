#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		printf("%s\n", *++argv);
	}

	return (0);
}
