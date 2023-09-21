#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *s)
{
	int a = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == letters[i])
			{
				*(s + a) = rot13[i];
				break;
			}
		}
		a++;
	}

	return (s);
}
