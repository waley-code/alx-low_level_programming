#include "main.h"
/**
* print_numbers - Function that loops through digits
* _putchar - Prints characters
* Return: Returns 0
*/
void print_numbers(void)
{
	char num = 0;

	while (num < 10)
	{
		_putchar(num);
		num++;
	}
	_putchar("\n")
}
