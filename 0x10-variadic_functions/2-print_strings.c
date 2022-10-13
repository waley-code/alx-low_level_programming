#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - Main entry function Point
* @separator: Operator comma space
* @n: Argument number of elements
* Return: Returns void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
