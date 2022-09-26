#include <stdlib.h>
#include "main.h"

/**
*  _strstr - A function that locates a substring
*  @haystack: the argument speack to search from
*  @needle: A pointer tp the substring
*  Return:  Returns a function pointing located substring, or NULL if
*  the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	int s = 0;

	while (needle[i] != '\0')
	{
		s++;
	}

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}
