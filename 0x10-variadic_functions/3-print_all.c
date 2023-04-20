#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types or arguments to be passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list argsList;
	int i = 0, format_length = 0, num_argsList = 0;
	char *s;

	va_start(argsList, format);
	while (format[format_length] != '\0')
		format_length++;
	while (format[i] != '\0')
	{
		if (num_argsList > 0)
			printf(", ");
		switch (format[i])
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
				s = va_arg(argsList, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		i++;
		num_argsList++;
	}
	va_end(argsList);
	printf("\n");
}
