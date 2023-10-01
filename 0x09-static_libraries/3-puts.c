#include "main.h"

/**
 * _puts - Prints a string followed by a newline.
 *
 * @str: A pointer to a string.
 *
 * This function prints the characters of the input string str until it
 * reaches the null terminator '\0' and then prints a newline character.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
