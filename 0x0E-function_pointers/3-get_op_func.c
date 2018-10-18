#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: operator to return.
 * Return: pointer to a function that called it.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && ops[i].op[1] == '\0')
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
