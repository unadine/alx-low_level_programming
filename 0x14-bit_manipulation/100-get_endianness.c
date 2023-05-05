#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if litle endian
 */
int get_endianness(void)
{
	int check = 1;

	if (*(char *)&check != 1)
		return (0);
	else
		return (1);
}
