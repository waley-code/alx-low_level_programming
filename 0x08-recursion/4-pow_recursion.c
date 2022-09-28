#include "main.h"

/**
* _pow_recursion - Main function making x raised to the power of y.
* @x: Argument of the base number
* @y: Argument power
* Return: Returns a recursion of x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y <= 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
