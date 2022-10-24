#include <stdio.h>
/**
 * main - produce natural numbers below 1024 (!included) which are multiples of 3 || 5.
 * Return: Retuns 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
