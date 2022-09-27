#include "main.h"
#include <stdio.h>
/**
* print_diagsums - A function that prints sum of two diagonals of a square
* @a: An argument of array
* @size: Argument representing size of the array
* Return: Returns no value
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (i <= (size * size))
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sum2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
