#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints input strings followed by new line
 * @separator: string to separate each printed string
 * @n: number of input strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argsList;
	char *str;
	unsigned int i;

	va_start(argsList, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(argsList, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(argsList);
	printf("\n");
}
