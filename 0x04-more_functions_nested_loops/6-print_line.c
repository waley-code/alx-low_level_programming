#include"main.h"
/**
* print_line - prints a straight line
* @n: argument inputed number of times the _ character
* Return: Returns 0
* _putchar - Prints character
*/
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
