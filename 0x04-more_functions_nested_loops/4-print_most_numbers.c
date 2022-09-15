#include "main.h"
/**
* print_numbers - Function that loops through digits excepts 2 and 4
* _putchar - Prints characters
* Return: Returns 0
*/
void print_most_numbers(void)
{
	char num = 48;

	while (num >= 48 && num <= 57)
	{
		if (!(num == 50 || num == 52))
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
