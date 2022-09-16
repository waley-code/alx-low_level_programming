#include "main.h"
/**
* print_diagonal - prints diagonal line
* @n: argument inputed
* _putchar - Prints character
*/

void print_diagonal(int n)
{
	int e = 0;
	int f = 0;

	if (n > 0)
	{
		while (e < n)
		{
			while (f < e)
			{
				_putchar(' ');
				f++;
			}
			e++;
			f = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
