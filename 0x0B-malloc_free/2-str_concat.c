#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - Main function
* @s1: First string char
* @s2: Second string char
* Return: Returns a pointer pointing to a freshly allocated memory space / NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *strng = NULL;
	unsigned int i = 0;
	int n1 = 0;
	int n2 = 0;
	int cnt = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[n1] != '\0')
	{
		n1++;
	}
	while (s2[n2] != '\0')
	{
		n2++;
	}
	strng = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (strng == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		strng[i] = s1[i];
		i++;
	}
	for (; s2[cnt] != '\0'; i++)
	{
		strng[i] = s2[cnt];
		cnt++;
	}
	return (strng);
}
