#include "main.h"

/**
 * jack_bauer - Prints every minute of the day in the format HH:MM.
 *
 * Description: This function prints
 * every minute of the day, starting from
 * 00:00 and ending at 23:59, in the format HH:MM.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
