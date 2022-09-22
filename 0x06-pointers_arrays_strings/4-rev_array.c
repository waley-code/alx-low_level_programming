#include "main.h"
/**
 * reverse_array - A function that reverses contents of inputed array
 * @a: integer array to be reversed
 * @n: Argument of a pointerto lentght of an array
 * Return: Returns a void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int g;

	for (n -= 1; i < n; n--)
	{
		g = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = g;
		i++;
	}
	_putchar('\n');
}
