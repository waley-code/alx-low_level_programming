#include "main.h"
/**
*print_array - main function of the progamme
*@a: first arguments
*@n: Second argument to be inputed as variable parameter
*/

void print_array(int *a, int n)
{
	int i, p = 0;

	for (i = 0; i < n; i++)
	{
	if (p != 0)
	{
	printf(", ");
	}
	printf("%i", a[i]);

	p++;
	}
	putchar('\n');
}
