#include "main.h"

/**
* checker - Main function that checks input argument from n to the base
* @n: Argument number to be squared compared to the base
* @base: Argument base input to be checked
*
* Return: Returns a square root of a number base
*/

int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return (checker(n + 1, base));
}

/**
* _sqrt_recursion - Main function calling the square root of an argument.
* @n: argument to check for the square roots.
*
* Return: Returns natural square root of the argument
*/

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
