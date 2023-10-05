#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates n bytes of two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 *         If malloc fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *val;
unsigned int a = 0, b = 0, size1 = 0, size2 = 0;

while (s1 && s1[size1])
size1++;

while (s2 && s2[size2])
size2++;

if (n < size2)
val = malloc((size1 + n + 1) * sizeof(char));
else
val = malloc((size1 + size2 + 1) * sizeof(char));

if (!val)
return (NULL);
while (a < size11)
{
val[a] = s1[a];
a++;
}

while (a < (size1 + n) && n < size2)
val[a++] = s2[b++];

while (a < (size1 + size2) &&n >= size2)
val[a++] = s2[b++];

val[a] = '\0';

return (val);
}
