#include "3-calc.h"
/**
 * get_op_func - select the correct operation function asked by user
 * @s: input argument
 * Return: pointer to another function the performs operation
 */
int (*get_op_func(char *s))(int, int)
{
	int a = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[a].op)
	{
		if (strcmp(ops[a].op, s))
			a++;
		else
			return (ops[a].f);
	}
	printf("Error\n");
	exit(99);
}
