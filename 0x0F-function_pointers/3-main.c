#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - Entry point of a program to perform arithmetic operations
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Description: This program takes three command-line arguments: two integers
 * and an arithmetic operator, and performs the specified operation on the
 * given integers. It then prints the result.
 *
 * Return: 0 on success, 98 for an incorrect number of arguments, 99 for an
 * invalid operator, and 99 for other errors.
 */



int main(int argc, char **argv)
{
int a, b;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

f  = get_op_func(argv[2]);

if (f == NULL)
{
printf("Error\n");
return (99);
}

if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
argv[2][0] != '*' && argv[2][0] != '%') || strlen(argv[2]) != 1)
{
printf("Error\n");
exit(99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", f(a, b));

return (0);

}
