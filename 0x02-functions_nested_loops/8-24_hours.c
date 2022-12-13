#include "main.h"
/**
 * jack_bauer -  every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while (hour < 24)
	{
		_putchar('0' + (hour / 10));
		_putchar('0' + (hour % 10));
		minute = 0;
		while (minute < 60)
		{
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10)):
			minute++;
		}
		_putchar('\n');
		hour++;
	}
}
