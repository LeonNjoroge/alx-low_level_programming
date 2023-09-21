#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in a string.
 * @p: The string to convert.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
