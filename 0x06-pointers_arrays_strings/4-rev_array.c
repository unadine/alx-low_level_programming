#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
