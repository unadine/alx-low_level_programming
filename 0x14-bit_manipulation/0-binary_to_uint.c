#include "main.h"
/**
 *  * binary_to_uint - converts binary to unsigned int
 *   * @b: binary string
 *    * Return: decimal # or 0 if fails
 *     */
unsigned int binary_to_uint(const char *b) {
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b == '0')
		{
			res = (res << 1) | 0;
		} else if (*b == '1')
		{
			res = (res << 1) | 1;											} else {
			return (0);  												}			        
	}

	return (res);
}


