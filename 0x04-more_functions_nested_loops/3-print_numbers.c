#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 *
 * Description: This function
 * prints numbers from 0 to 9 using _putchar.
 *
 * Return: No return value.
 */
void print_numbers(void)
{
    int i;

    for (i = 48; i < 58; i++)
    {
        _putchar(i);
    }
    
    _putchar('\n');
}
