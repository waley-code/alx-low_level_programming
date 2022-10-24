#include <stdio.h>
/**
* main - Produces sum of even-valued Fibonacci series !surpassing 4000000.
* Return: Returns 0.
*/
int main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long add;
	float fnb_add;

	while (1)
	{
		add = num1 + num2;
		if (add > 4000000)
			break;

		if ((add % 2) == 0)
			fnb_add += add;

		num1 = num2;
		num2 = add;
	}
	printf("%.0f\n", fnb_add);

	return (0);
}
