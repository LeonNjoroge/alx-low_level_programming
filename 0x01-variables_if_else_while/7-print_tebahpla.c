#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase letters from 'z' to 'a' in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
