#include <stdio.h>
/**
 * main - produces 50 Fibonacci numbers, begining from 1 and 2 spaced by a "," and a space.
 * Return: Returns 0.
 */
int main(void)
{
	int counter;
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long add;

	for (counter = 0; counter < 50; counter++)
	{
		add = num1 + num2;
		printf("%lu", add);

		num1 = num2;
		num2 = add;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
