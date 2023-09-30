#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program calculates the minimum number of coins required
 * to make change for a given amount
 *in cents (provided as a command-line argument).
 * It considers the denominations of 25, 10, 5, 2, and 1 cent coins.
 *
 * Return: 0 if successful, 1 on error
 */
int main(int argc, char *argv[])
{
int cent, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
while (cent > 0)
{
if (cent >= 25)
cent -= 25;
else if (cent >= 10)
cent -= 10;
else if (cent >= 5)
cent -= 5;
else if (cent >= 2)
cent -= 2;
else if (cent >= 1)
cent -= 1;
coins++;
}
printf("%d\n", coins);
return (0);
}
