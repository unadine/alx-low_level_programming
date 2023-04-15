#include "main.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from second string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int s1Len = 0, s2Len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Len = strlen(s1);
	s2Len = strlen(s2);
	if (n >= s2Len)
		n = s2Len;
	res = (char *) malloc(sizeof(char) * (s1Len + n + 1));
	if (res == NULL)
		return (NULL);
	strcpy(res, s1);
	strncat(res, s2, n);
	res[s1Len + n] = '\0';
	return (res);
}
