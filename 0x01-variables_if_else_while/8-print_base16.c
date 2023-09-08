#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 0 to 9 followed by lowercase letters
 * from 'a' to 'f'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char letter;

	for (; i <= 9; i++)
	{
		putchar('0' + i);
	}

	letter = 'a';

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
