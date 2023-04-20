#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: count of inputs
 * @argv: array of input including n # of z to print
 * Return: 0 success, 1 error, 2 error
 */
int main(int argc, char **argv)
{
	int i, z;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	z = atoi(argv[1]);
	if (z < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < z; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);
		printf("%c", i < z - 1 ? ' ' : '\n');
	}
	return (0);
}
