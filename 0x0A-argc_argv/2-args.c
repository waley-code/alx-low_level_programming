#include "main.h"

/**
* main - Main function
* @argc: first argument of the main function
* @argv: second argument of the main function
* Return: Returns 0 always
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i <= argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
