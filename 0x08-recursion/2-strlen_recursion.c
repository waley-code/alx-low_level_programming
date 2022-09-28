#include "main.h"
/**
* _strlen_recursion - Main function that returns the length of a string.
* @s: Argument parameter of string to be counted
* Return: Returns the length of the input string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
