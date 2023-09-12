#include <stdio.h>

/**
 * main - Print 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long fiboA, fiboB, val;
	int count;

	fiboA = 0;
	fiboB = 1;
	count = 0;

	while (count < 50)
	{
		val = fiboA + fiboB;
		fiboA = fiboB;
		fiboB = val;

		if (count != 49)
			printf("%ld, ", val);
		else
			printf("%ld\n", val);

		count++;
	}

	return (0);
}
