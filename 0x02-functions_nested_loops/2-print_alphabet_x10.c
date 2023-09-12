#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times, each on a new line.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z' ten times.
 * Each alphabet sequence is printed on a new line.
 */
void print_alphabet_x10(void)
{
    int count = 0;

    while (count <= 9)
    {
        char letter = 'a';

        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        _putchar('\n');
        count++;
    }
}
