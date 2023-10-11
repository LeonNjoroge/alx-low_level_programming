#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to
 * perform an arithmetic operation
 * @s: The operator as a string
 *
 * Description: This function takes an operator as a string and selects the
 * appropriate function to perform the corresponding arithmetic operation.
 * It returns a pointer to the selected function.
 *
 * Return: A pointer to the selected function for the given operator, or
 * NULL if the operator is not recognized.
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

int a;

a = 0;
while (a < 5)
{
if (s[0] == ops[a].op[0])
{
return (ops[a].f);
}
a++;
}


return (NULL);
}
