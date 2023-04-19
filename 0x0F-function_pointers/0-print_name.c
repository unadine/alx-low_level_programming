#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - calls another function to print name
 * @name: pointer to string name to print
 * @f: pointer to function that prints
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
