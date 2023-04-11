#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of program
 * @ac: count of args
 * @av: pointer to array of args
 * Return: pointer to new array of all args or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		l += strlen(av[i]) + 1;
	}
	ptr = malloc(sizeof(char) * l);
	if (ptr == NULL)
	{
		return (NULL);
	}
	do {
		do {
			ptr[k++] = av[i][j];
		} while (av[i][j++] != '\0');
		ptr[k++] = '\n';
	} while (++i < ac);
	ptr[k] = '\0';

	return (ptr);
}
