#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integers from a given number to 98.
 *
 * @num: The starting number.
 *
 * Description: This function prints all integers from the given number @num to 98.
 * It starts from @num and increments or decrements as needed to reach 98,
 * printing each number followed by a comma and space. It ends with a newline.
 */
void print_to_98(int num)
{
	while (num != 98)
	{
		printf("%d, ", num);

		if (num < 98)
			num++;
		else
			num--;
	}

	printf("%d\n", num);
}
