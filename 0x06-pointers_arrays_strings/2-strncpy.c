#include "main.h"

/**
 * _strncpy - Copies up to 'n' bytes from source to destination.
 * @dest: The destination buffer.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
