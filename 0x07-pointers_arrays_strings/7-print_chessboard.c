#include "main.h"

/**
*  print_chessboard - Thi prints the chessboard
*  @a: Argument for the row of the array
*  Return: Does not return any value
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		int j = 0;

		while (j < 8)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
			j++;
		}
		i++;
	}
}
