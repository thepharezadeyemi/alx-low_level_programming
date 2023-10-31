#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to array
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int i, r, s = 0, t = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (r = 0; av[i][r]; r++)
			t++;
	}
	t += ac;

	args = malloc(sizeof(char) * t + 1);
	if (args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (r = 0; av[i][r]; r++)
		{
			args[s] = av[i][r];
			s++;
		}
		if (args[s] == '\0')
		{
			args[s++] = '\n';
		}
	}
	return (args);
}
