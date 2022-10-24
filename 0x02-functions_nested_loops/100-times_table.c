#include "main.h"
/**
* print_times_table - creates times table of argument starting from 0.
* @n: Argument passed into the function to be calculated.
*/
void print_times_table(int n)
{
	int val;
	int lev;
	int result;

	if (n >= 0 && n <= 15)
	{
		for (val = 0; val <= n; val++)
		{
			_putchar('0');

			for (lev = 1; lev <= n; lev++)
			{
				_putchar(',');
				_putchar(' ');

				result = val * lev;

				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
