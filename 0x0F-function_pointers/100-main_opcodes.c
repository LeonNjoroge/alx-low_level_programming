#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Description: This program takes an integer argument
 * converts the main function
 * to a character pointer
 * and prints the first 'n' bytes of its machine code
 * representation in hexadecimal format.
 *
 * Return: 0 on success, 1 for an incorrect
 * number of arguments, and 2 for a negative byte count.
 */

int main(int argc, char *argv[])
{
char *oppc = (char *) main;
int a = 0;
int bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}
while (a < bytes)
{
printf("%02x", oppc[a] & 0xFF);
if (a != bytes - 1)
{
printf(" ");
}
a++;
}
printf("\n");
return (0);
}
