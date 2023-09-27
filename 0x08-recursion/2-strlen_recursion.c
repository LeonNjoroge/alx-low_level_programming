#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string recursively.
 *
 * @s: The string for which to find the length.
 *
 * Description: This function recursively computes the length of the
 * provided string by counting each character until the null terminator
 * is encountered.
 *
 * Return: The length of the string.
 */
#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
