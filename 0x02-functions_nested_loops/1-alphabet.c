#include "main.h"

/**
 * print_alphabet - function printing alphabets, in lowercase.
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
