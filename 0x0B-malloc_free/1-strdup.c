#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Main function entry
* @str: a pointer argument od cher datatype to be duplicated
* Return: Returns a pointer pointing to the duplicated char string / NULL
*/
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i = 0;
	int n = 0;

	if (str == NULL)
		return (NULL);
	while (str[n] != '\0')
	{
		n++;
	}
	strng = (char *)malloc(n + 1 * sizeof(char));
	if (strng != NULL)
	{
		while (str[i] != '\0')
		{
			strng[i] = str[i];
			i++;
		}
	} else
	{
		return (NULL);
	}
	strng[i] = '\0';
	return (strng);
}
