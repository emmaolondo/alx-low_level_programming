#include "main.h"
#include <stddef.h>

/**
 *_strchr - locates a character in a string
 *@s: string pointer
 *@c: character to be located
 *
 *
 *Return: string
 */
char *_strchr(char *s, char c)
{
	int i; /* used for element count*/

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);/* points the string from the character*/
		}
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
