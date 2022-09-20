#include "main.h"
#include <string.h>
/**
*puts_half -function
*@str: parameter
*/
void puts_half(char *str)
{
	int j, k = strlen(str);

	if (k % 2 == 0)
	{
		j = k / 2;
	}
	else
	{

		j = (k + 1) / 2;
	}
	while (j < k)
	{
	putchar(str[j]);
	j++;
	}
	putchar('\n');
}
