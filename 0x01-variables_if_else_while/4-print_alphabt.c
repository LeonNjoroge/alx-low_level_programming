#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase letters from 'a' to 'z', excluding 'e' and 'q'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}
