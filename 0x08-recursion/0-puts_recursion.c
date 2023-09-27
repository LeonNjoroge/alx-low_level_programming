#include "main.h"

/**
 * _puts_recursion - Prints a string recursively, followed by a newline.
 *
 * @s: The string to be printed.
 *
 * Description: This function recursively prints each character of the
 * provided string, followed by a newline character when the end of
 * the string is reached.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
