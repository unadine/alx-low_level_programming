#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: interger to number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		int sum = 0;
		unsigned int i;
		va_list argsList;

		va_start(argsList, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(argsList, int);
		}
		va_end(argsList);
		return (sum);
	}
	else
	{
		return (0);
	}
}
