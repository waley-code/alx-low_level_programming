#include "main.h"
#include <string.h>
/**
* _strncpy - Main function
* @dest : Pointer to char datatype
* @src : Pointer pointing to char datatype
* @n : Argument of int datatype
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
