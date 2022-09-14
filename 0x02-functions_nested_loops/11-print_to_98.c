#include <man.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * _putchar - prints results
 * @h: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int h)
{
	if (h < 98)
	{
		while (h <= 98)
		{
			_putchar(h);
			if (h != 98)
			{
				_putchar(",");
				_putchar(" ");
			}
			h++;
		}
	}
	else if (h > 98)
	{
		while (h >= 98)
		{
			_putchar(h);
			if (h != 98)
			{
				_putchar(",");
				_putchar(" ");
			}
			h--;
		}
	}
	else
	{
		_putchar("98");
	}
	_putchar("\n");
}
