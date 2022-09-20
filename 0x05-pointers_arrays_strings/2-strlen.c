#include "main.h"

/**
* _strlen - main funtion that take a string as an argument
* @s: Inputed argument
* Return: Returns the lenghth of an inputed robber
*/
int _strlen(char *s)
{
	for (int i = 0; s[i] != '\0'; 1++)
	{
		i++;
	}
	return (i);
}
