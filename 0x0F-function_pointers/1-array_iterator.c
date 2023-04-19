#include "function_pointers_main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given on each element of an array.
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
