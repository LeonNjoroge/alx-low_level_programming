#include "main.h"

/**
 * file_error - Handles file-related errors and exits
 * the program with specific codes.
 * @f_f: File descriptor for the source file.
 * @f_t: File descriptor for the target file.
 * @argv: An array of command-line arguments.
 */

void file_error(int f_f, int f_t, char *argv[])
{
if (f_f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (f_t == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - Entry point for a program to copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments
 * including source and target file names.
 *
* Return: On success, it returns 0. If an error occurs
* it exits with an appropriate exit code.
 */

int main(int argc, char *argv[])
{
ssize_t cns, wn;
int f_f, f_t, e_cl;
char c[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp f_f f_t");
exit(97);
}
f_f = open(argv[1], O_RDONLY);
f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_error(f_f, f_t, argv);
cns = 1024;
while (cns == 1024)
{
cns = read(f_f, c, 1024);
if (cns == -1)
file_error(-1, 0, argv);
wn = write(f_t, c, cns);
if (wn == -1)
file_error(0, -1, argv);
}
e_cl = close(f_f);
if (e_cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
exit(100);
}

e_cl = close(f_t);

if (e_cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
exit(100);
}
return (0);

}
