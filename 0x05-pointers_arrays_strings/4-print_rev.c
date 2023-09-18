#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: A pointer to a string.
 *
 * This function takes a pointer to a string and prints the characters
 * of the string in reverse order, followed by a newline character.
 */
void print_rev(char *s)
{
int len = strlen(s);
int i = len - 1;

for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
