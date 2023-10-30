#include "main.h"

/**
 * read_textfile - Reads and prints a text file to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters it should read and print.
 *
 * Return: If successful, the number of letters it could read and print.
 *         Otherwise, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, b;
int m;
char *c;


if (!filename)
{
return (0);
}

m = open(filename, O_RDONLY);

if (m == -1)
{
return (0);
}

c = malloc(sizeof(char) * (letters));

if (!c)
{
return (0);
}
a = read(m, c, letters);
b = write(STDOUT_FILENO, c, a);

close(m);

free(c);

return (b);

}
