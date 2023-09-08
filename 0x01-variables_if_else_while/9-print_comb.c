#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 0 to 9 separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
	}

	putchar('\n');
	return (0);
}
