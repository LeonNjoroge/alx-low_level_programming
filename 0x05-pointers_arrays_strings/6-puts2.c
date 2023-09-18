#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the 
 *first character, followed by a new line.
 *
 * @str: A pointer to a string.
 *
 * This function takes a pointer to a string and prints every other character
 * of the string, starting with the first character. It then adds a newline
 * character at the end.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
+= 2;
}

_putchar('\n');
}
