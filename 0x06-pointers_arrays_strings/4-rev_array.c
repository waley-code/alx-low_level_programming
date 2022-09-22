#include "main.h"
#include <stdio.h>
/**
* reverse_array - Main body function
* @a : Pointer pointing toint array
* @n: argument of int datatype
*/
void reverse_array(int *a, int n)
{
	int p = n - 1;

	int i = 1;

	for (i = p; i >= 0; i--)
	{
		if (p != n - 1)
		{
			printf(", ");

		}
		printf("%i", a[p]);
	}
	putchar('\n');
}
