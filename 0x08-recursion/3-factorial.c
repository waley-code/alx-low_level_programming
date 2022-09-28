#include "main.h"
/**
* factorial - The main function returning the factorial number
* @n: the argument max factorial
* Return: Returns the factorial of number n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
