#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(strlen(str) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);

	return (ptr);
}
