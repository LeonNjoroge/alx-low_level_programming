#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the information about a dog
 * @d: Pointer to the dog structure to print
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If the name or owner is NULL, it prints "(nil)" for that field.
 */

void print_dog(struct dog *d)
{
if (d)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
printf("Age: %f\n", d->age);
if (d->owner)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
