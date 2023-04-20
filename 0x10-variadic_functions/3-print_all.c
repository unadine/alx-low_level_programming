#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format:  list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list argsList;
	char *ch;
	int i = 0, z;

	while (format && format[i])
	{
		va_start(argsList, format);
		while (format[i])
		{
			z = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(argsList, int));
				break;
			case 'i':
				printf("%d", va_arg(argsList, int));
				break;
			case 'f':
				printf("%f", va_arg(argsList, double));
				break;
			case 's':
				ch = va_arg(argsList, char*);
				if (ch)
				{
					printf("%s", ch);
					break;
				}
				printf("(nil)");
				break;
			default:
				z = 0;
				break;
			}
			if (format[i] && z)
				printf(", ");
		}
		va_end(argsList);
	}
	printf("\n");
}
