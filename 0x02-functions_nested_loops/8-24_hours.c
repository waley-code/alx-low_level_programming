#include "main.h"
/**
 * jack_bauer - function printing minutes of the day
 * while loop breaks before passing 24:00
 * Return: returns a whole day time on every line
 */
void jack_bauer(void)
{
	int hrs = 0;

	while (hrs < 24)
	{
		int min = 0;

		while (min < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			++min;
		}
		++hrs;
	}
}
