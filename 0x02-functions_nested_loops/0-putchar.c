#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 *
 * Description: This is the main function of the program. It prints the
 * string "_putchar" character by character using the `_putchar` function
 * and returns 0 to indicate successful execution.
 */
int main(void)
{
  char str[] = "_putchar\n";
  int i = 0;
  for (; str[i] != '\0'; i++)
    {
      _putchar(str[i]);
    }

  return (0);
}
