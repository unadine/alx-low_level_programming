#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of argsList passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argsList;
	unsigned int i;
	int num;

	va_start(argsList, n);
	for (i = 0; i < n; ++i)
	{
		num = va_arg(argsList, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(argsList);
	printf("\n");
}
