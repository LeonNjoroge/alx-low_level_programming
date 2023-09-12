#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int addition = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			addition = addition + i;
	}

	printf("%d\n", addition);
	return (0);
}
