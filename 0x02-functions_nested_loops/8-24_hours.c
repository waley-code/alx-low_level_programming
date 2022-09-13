#include "main.h"
/**
 * jack_bauer - function printing minutes of the day
 * / 10 allows second digit to rotate
 * while loop breaks before passing 24:00
 * Return: returns a whole day time on every line
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;

	while (hrs < 24)
	{
		while (mmin < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			min++;
		}
		hrs++;
	}
}
