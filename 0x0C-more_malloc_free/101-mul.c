#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>

int char_strLen(char *str);
void *_calloc(unsigned int bytes, unsigned int size);
void arraySum(int *mulRes, int *sumRes, int strLen_r);
int checkDigit(char c);
void output_result(int *sumRes, int strLen_r);

/**
 * char_strLen - finds string strLength
 * @str: input pointer to string
 * Return: strLength of string
 */
int char_strLen(char *str)
{
	int strLen;

	for (strLen = 0; *str != '\0'; strLen++)
		strLen++, str++;
	return (strLen / 2);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @bytes: bytes of memory needed per size requested
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int bytes, unsigned int size)
{
	unsigned int i;
	char *p;

	if (bytes == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / bytes || bytes >= UINT_MAX / size)
		return (NULL);
	p = malloc(size * bytes);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < bytes * size; i++)
		p[i] = 0;
	return ((void *)p);
}
/**
 * arraySum - adds 2 arrays of ints
 * @mulRes: pointer to array with numbers from product
 * @sumRes: pointer to array with numbers from total sum
 * @strLen_r: strLength of both arrays
 * Return: void
 */
void arraySum(int *mulRes, int *sumRes, int strLen_r)
{
	int i = 0, strLen_r2 = strLen_r - 1, carry = 0, sum;

	while (i < strLen_r)
	{
		sum = carry + mulRes[strLen_r2] + sumRes[strLen_r2];
		sumRes[strLen_r2] = sum % 10;
		carry = sum / 10;
		i++;
		strLen_r2--;
	}
}
/**
 * checkDigit - checks for digits
 * @c: input character to check for digit
 * Return: 0 failure, 1 success
 */
int checkDigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	printf("Error\n");
	return (0);
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @strLen_1: strLength of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @strLen_2: strLength of factor 2
 * @strLen_r: strLength of result arrays
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int strLen_1, char *num2, int strLen_2, int strLen_r)
{
	int i = 0, i1 = strLen_1 - 1;
	int i2, product, carry, digit, *mulRes, *sumRes;

	sumRes = _calloc(sizeof(int), (strLen_r));
	while (i < strLen_1)
	{
		mulRes = _calloc(sizeof(int), strLen_r);
		i2 = strLen_2 - 1, digit = (strLen_r - 1 - i);
		if (!checkDigit(num1[i1]))
			return (NULL);
		carry = 0;
		while (i2 >= 0)
		{
			if (!checkDigit(num2[i2]))
				return (NULL);
			product = (num1[i1] - '0') * (num2[i2] - '0');
			product += carry;
			mulRes[digit] += product % 10;
			carry = product / 10;
			digit--, i2--;
		}
		arraySum(mulRes, sumRes, strLen_r);
		free(mulRes);
	    i++, i1--;
	}
	return (sumRes);
}
/**
 * output_result - prints my array of the hopeful product here
 * @sumRes: pointer to int array with numbers to add
 * @strLen_r: strLength of result array
 * Return: void
 */
void output_result(int *sumRes, int strLen_r)
{
	int i = 0;

	while (sumRes[i] == 0 && i < strLen_r)
		i++;
	if (i == strLen_r)
		_putchar('0');
	while (i < strLen_r)
		_putchar(sumRes[i++] + '0');
	_putchar('\n');
}
/**
 * main - multiply 2 input #'s of large strLengths and print result/ Error
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, Success
 */
int main(int argc, char **argv)
{
	int strLen_1, strLen_2, strLen_r, temp, *sumRes;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	strLen_1 = char_strLen(argv[1]), strLen_2 = char_strLen(argv[2]);
	strLen_r = strLen_1 + strLen_2;
	if (strLen_1 < strLen_2)
		num1 = argv[1], num2 = argv[2];
	else
	{
		num1 = argv[2], num2 = argv[1];
		temp = strLen_2, strLen_2 = strLen_1, strLen_1 = temp;
	}
	sumRes = multiply(num1, strLen_1, num2, strLen_2, strLen_r);
	if (sumRes == NULL)
		exit(98);
	output_result(sumRes, strLen_r);
	return (0);
}
