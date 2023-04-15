#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: start (min) of range of values to include
 * @max: max of range of values to include
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *ptrArr;
	int i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	ptrArr = (int *) malloc(sizeof(int) * s);
	if (ptrArr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
	{
		ptrArr[i] = min + i;
	}
	return (ptrArr);
}
