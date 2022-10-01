#include "main.h"
#include <string.h>
/**
* number_check - Main function
* @b: first argument
* Return: Returns 1 always
*/
int number_check(char *b)
{
	int g;
	int number;
	int lenth;

	number = 0;
	lenth = strlen(b);

	for (g = 0; g < lenth; g++)
	{
		if (b[g] < '0' || b[g] > '9')
		{
			return (-1);
		}
		else
			number = number * 10 + (b[g] - '0');
	}
	return (number);
}

/**
* main - main functions adding +ve numbers
* @argc: first argument of main function
* @argv: second argument array containg str
* Return: Returns the addtion result or 1
**/
int main(int argc, char *argv[])
{
	int i = 1;
	int n;
	int s;

	s = 0;

	while (i < argc)
	{
		n = number_check(argv[i]);
		if (n == -1)
		{
			printf("Error\n");
			return (1);
		}
		s += n;
		i++;
	}
	printf("%d\n", s);
	return (0);
}
