#include "main.h"

/**
 * _strlen - Computes the length of a string.
 *
 * @s: A pointer to a string.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
    int count = 0;
    int i = 0;
    
    for (; s[i] != '\0'; i++)
    {
        count++;
    }

    return (count);
}
