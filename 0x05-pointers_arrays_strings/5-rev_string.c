#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*rev_string - function
*@s: char parameter
*/
void rev_string(char *s)
{
	char *p = s;

	char t[500];

	int index = strlen(s);

	int i = 0;

	while (s[index] != '\0')
	{
		t[i] = s[index];
		index--;
		i++;
	}

	strcpy(p, t);



}
