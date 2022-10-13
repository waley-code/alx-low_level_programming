#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - Main entry Point
* @separator: Operator comma space
* @n: Argument elements to be printed
* Return: Returns void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
