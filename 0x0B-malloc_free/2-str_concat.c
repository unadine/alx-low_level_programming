#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer to newly allocated space in memory with both strings or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
	{
	return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}
