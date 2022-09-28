#include "main.h"
/**
*  _puts_recursion - Main function that gets called over
* @s: Pointer argument pointing to a char datatype
* Return: Returns nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);

}
