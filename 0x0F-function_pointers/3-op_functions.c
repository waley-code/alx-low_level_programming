#include <stdio.h>
#include <stdlib.h>
/**
* op_add - Main function of addition operator
* @a: first argument of int
* @b: second argument of int
* Return: Returns the sum of two numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Main function of subtraction operator
* @a: first argument of in
* @b: second argument of int
* Return: Returns diff between 2 numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Main function of product of 2 numbers
* @a: first argument of int
* @b: second argument of int
* Return: Retuns a product of the two numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Main function of dividing 2 numbers
* @a: first argument of int
* @b: second argument int
* Return: Returns the result of the division of the numbers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Main function getting the remainder of the division of 2 numbers
* @a: first argument int
* @b: second argument int
* Return: Returns the remainder of division of the numbers
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
