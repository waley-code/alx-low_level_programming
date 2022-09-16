#include <stdio.h>
/**
* main - Prints the Fizz Buzz Game.
* Return: 0
* printf - prints to standard output
*/
int main(void)
{
	int b;

	for (b = 1; h <= 100; b++)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf("FizzBuzz ");
		else if (b % 5 == 0)
		{
			if (b == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (b % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", b);
	}
return (0);
}
