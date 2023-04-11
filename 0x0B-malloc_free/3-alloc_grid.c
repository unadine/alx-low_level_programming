#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (j < i)
			{
				free(ptr[j]);
				j++;
			}
			free(ptr);
			return (NULL);
		}
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}

