#include "main.h"

/**
* main - Main function
* @argc: first argument of the main function
* @argv: second argument of the main function
* Return: Returns 1 always
*/
int main(int argc, char *argv[])
{
	if (argc > 1 && argc < 4)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
