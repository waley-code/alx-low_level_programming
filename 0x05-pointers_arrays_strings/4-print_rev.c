#include "main.h"
#include <string.h>

/**
* print_rev - main function of the program
* @s: argument of the main function
*/
void print_rev(char *s)
{
	int i;

	for (i =strlen(s) - 0; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n);
}
