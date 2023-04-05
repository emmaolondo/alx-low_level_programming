#include "main.h"

/**
 * _strstr -  a function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = j = 0;

	while (haystack[i])
	{
		while ((needle[j] && haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
