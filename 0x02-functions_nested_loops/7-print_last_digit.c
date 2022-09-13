#include "main.h"
/**
 * print_last_digit - function printing last digit of a number
 * @dig: number's last digit result
 * Return: returns the value of the last digit
 */
int print_last_digit(int dig)
{
	int inp;

	pld = (dig % 10);

	if (inp < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(inp + '0');
	return (inp);
}
