#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase letters from 'a' to 'z'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	  {
	  putchar(letter);
	  letter++;
	  }
	putchar('\n');
	return (0);
}
