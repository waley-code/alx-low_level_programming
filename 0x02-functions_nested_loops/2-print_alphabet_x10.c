#include "main.h"

/**
 * print_alphabet_x10 - function printing alphabets, in lowercase 10 times.
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet_x10(void)
{
	int i;
	int x10 = 0;

	while (x10 < 10)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		x10++;
		_putchar('\n');
	}
}
