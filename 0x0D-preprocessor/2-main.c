#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: This program prints
 * the name of the source file to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *name = __FILE__;
size_t size = strlen(name);

write(1, name, size);
write(1, "\n", 1);

return (0);
}
