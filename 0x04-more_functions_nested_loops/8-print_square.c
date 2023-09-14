#include "main.h"

/**
 * print_square - Prints a square made of '#' characters.
 * @size: The size of the square.
 *
 * Description: This function takes an integer 'size' and prints a square
 * of '#' characters. If 'size' is less than or equal to 0, it prints a newline.
 *
 * Return: No return value.
 */
void print_square(int size)
{
    int a, b;

    if (size > 0)
    {
        for (a = 0; a < size; a++)
        {
            for (b = 0; b < (size - 1); b++)
                _putchar('#');

            _putchar('#');
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
