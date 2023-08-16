#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform op
 * @s: operator to perform
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"_", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
