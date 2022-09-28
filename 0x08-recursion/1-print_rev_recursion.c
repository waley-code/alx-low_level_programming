#include "main.h"
/**
*  _print_rev_recursion - Main function that gets called over
* @s: Pointer argument pointing to a char datatype
* Return: Returns nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);


}
