#include "main.h"
/**
 * print_square - function that checks for uppercase character.
 * @size: the int for the paramaters of my function
 * Return: 0
 */
void print_square(int size)
{
	int e = 0;
	int f = 0;

	if (size > 0)
	{
		while (e < size)
		{
			while (f < size)
			{
				_putchar('#');
				f++;
			}
		f = 0;
		e++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
