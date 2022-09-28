#include "main.h"
/**
* checker - Main function that check for recursive input
* @n: Argument iterator
* @base: Argument base number to be checked
*
* Return: Returns 1 when n is prime number and 0 when otherwise.
*/

int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
	{
		return (0);
	}
	else if (n == base - 1)
	{
		return (1);
	}
	else if (base > n)
	{
		return (checker(n + 1, base));
	}
	return (1);
}

/**
* is_prime_number - Main functiom checking inputed argument is a prime number
* @n: Argument number to be checked
*
* Return: Returns 1 when n is prime number and 0 when otherwise.
*/
int is_prime_number(int n)
{
	return (checker(2, n));
}
