#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string in memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated string, or NULL if str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
unsigned int i, size;
char *val;

if (str == NULL)
{
return (NULL);
}

i = 0;
while (str[i])
{
i++;
}

size = i;

val = malloc(size * sizeof(char) + 1);

if (val == NULL)
{
return (NULL);
}
i = 0;
for (; i < size; i++)
{
val[i] = str[i];
}

val[i] = '\0';
return (val);
}
