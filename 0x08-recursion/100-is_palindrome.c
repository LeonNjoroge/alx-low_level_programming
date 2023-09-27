#include "main.h"
#include <string.h>

/**
 * check_palindrome - Helper function to check
 *if a string is a palindrome recursively.
 *
 * @s: The string to check for palindromicity.
 * @left: The left index of the current comparison.
 * @right: The right index of the current comparison.
 *
 * Description: This function is a helper function used by is_palindrome to
 * recursively check if a string 's' is a palindrome by comparing characters
 * from both ends towards the center.
 *
 * Return: 1 if 's' is a palindrome, 0 if not.
 */


int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
	{
		return (0);
	}
	return (check_palindrome(s, left + 1, right - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome recursively.
 *
 * @s: The string to check for palindromicity.
 *
 * Description: This function checks if the provided string 's' is a palindrome
 * using a helper function 'check_palindrome' for the calculation.
 *
 * Return: 1 if 's' is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}
