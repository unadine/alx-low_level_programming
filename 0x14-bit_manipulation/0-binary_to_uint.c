#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: check_dec # or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	unsigned int check_dec = 0;

	if (b == NULL)
		return (0);
	while (b[k] != '\0')
	{
		if (b[k] != '1' && b[k] != '0')
			return (0);
		check_dec <<= 1;
		if (b[k] == '1')
			check_dec ^= 1;
		k++;
	}
	return (check_dec);
}
