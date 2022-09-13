#include "main.h"
/**
 * times_table - function printing 9 times multiplication table.
 * first = row, sec = column, d = current digit
 * Return: returns the multiplication table
 * prints a space after every character
 */
void times_table(void)
{
	int first = 0;
	int sec = 1;
	int d;

	while (first <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (sec = 1; sec <= 9; sec++)
		{
			d = (first * sec);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (sec < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		first++;
		_putchar('\n');
	}

}
