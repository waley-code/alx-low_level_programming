#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - The main function of the programme
*@str: function argument of char data_type
*/
void puts2(char *str)
{
	int j, n = strlen(str);

	for (j = 0; j < n; j++)
	{

	if (j % 2 == 0)
	{
	putchar(str[j]);

	}

	}
	putchar('\n');
}
