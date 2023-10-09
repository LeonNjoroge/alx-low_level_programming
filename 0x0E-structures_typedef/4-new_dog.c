#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function
 * creates a new dog structure and initializes its
 * name, age, and owner fields.
 *
 * Return: A pointer to the newly created dog structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int a = 0, b = 0, c;
dog_t *dogo;

while (name[a] != '\0')
a++;
while (owner[b] != '\0')
b++;

dogo = malloc(sizeof(dog_t));
if (dogo == NULL)
{
free(dogo);
return (NULL);
}

dogo->name = malloc((a + 1) * sizeof(char));
if (dogo->name == NULL)
{
free(dogo->name);
free(dogo);
return (NULL);
}

c = 0;
while (c <= b)
{
dogo->owner[c] = owner[c];
c++;
}
dogo->age = age;
dogo->owner = malloc(b *sizeof(dogo->owner));
if (dogo->owner == NULL)
{
free(dogo->owner);
free(dogo->name);
free(dogo);
return (NULL);
}

return (dogo);
}
