#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: first argument
 * @av: string pointer
 *
 *
 * Return: concatinated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, b;
	char *str;

	len = b = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[b] = av[i][j];
			b++;
		}
		str[b] = '\n';
		b++;
	}
	str[b] = '\0';
	return (str);
}
