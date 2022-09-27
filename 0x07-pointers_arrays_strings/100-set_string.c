#include "main.h"
/**
* set_string - A function that sets the value of a pointer to a char
* @s: Argument pointer to be dereferenced
* @to: Argument char to cange the pointer to
* Return: This does not return anything
*/

void set_string(char **s, char *to)
{
	*s = to;
}
