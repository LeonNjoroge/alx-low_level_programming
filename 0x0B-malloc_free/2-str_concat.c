#include "main.h"
11;rgb:0000/0000/0000#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
char *tmp1, *tmp2, *val;
unsigned int i, j, len1, len2;

tmp1 = s1;
tmp2 = s2;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

i = 0;
j = 0;

while (*s1++)
i++;

while (*s2++)
j++;

s1 = tmp1;
s2 = tmp2;
len1 = i;
len2 = j;
val = malloc((len1 + len2) * sizeof(char) + 1);

if (val == NULL)
return (NULL);

i = 0;
j = 0;

for (; i < len1; i++)
val[i] = s1[i];

for (; i < len1 + len2; i++)
val[i] = s2[i - len1];

val[i] = '\0';
return (val);
}
