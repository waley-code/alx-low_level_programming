#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * printf - prints results
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int h = n;

		while (h <= 98)
		{
			printf("%d, ", h);
			h++;
		}
	}
	else if (n > 98)
	{
		int h = n;

		while (h >= 98)
		{
			printf("%d, ", h);
			h--;
		}
	}
	else
	{
		printf("98\n");
	}
}
