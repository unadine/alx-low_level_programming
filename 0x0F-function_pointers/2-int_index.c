#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function
 * Return: integer found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size && cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
