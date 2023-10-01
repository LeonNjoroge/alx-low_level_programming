#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is an alphabetic character, 0 otherwise.
 *
 * Description: This function checks if the input
 *character @c is an alphabetic character.
 * It returns 1 if @c is alphabetic
 *(either lowercase or uppercase), and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
