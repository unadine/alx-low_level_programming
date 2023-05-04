#include "main.h"
/**
 *  * binary_to_uint - converts a binary number to an unsigned int.
 *   * @b: pointing to a string of 0 and 1 chars
 *    * Return: the converted number, or 0 if
 *     * ****there is non 0 or one chars in the string b
 *      * ****b is nul
 *       */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	unsigned int res = 0;
	if (b == NULL)
		return (0);
	while (b[k] != '\0')
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		res <<= 1;
		if (b[k] == '1')												res ^= 1;
		k++;
	}
	return (res);
}
