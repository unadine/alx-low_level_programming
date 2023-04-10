#include <stdio.h>
/**
 * main - the entry point
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
