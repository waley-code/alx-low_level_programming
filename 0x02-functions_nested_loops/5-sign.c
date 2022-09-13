#include "main.h"
/**
 * print_sign - function printing sign and returninging a number
 * @h: single number input
 * Return: returns 1 prints '+' if h > 0, 0 prints '0' if h = 0,
 * -1 prints '-' if h < 0
 */

int print_sign(int h)
{
	if (h > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (h == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
