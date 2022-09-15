#include "main.h"
/**
* print_numbers - Function that loops through digits
* _putchar - Prints characters
* Return: Returns 0
*/
void print_numbers(void)
{
	char num = 48;

	while (num >= 48 && num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
