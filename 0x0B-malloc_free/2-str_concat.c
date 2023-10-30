#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return:pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, r;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0, r = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[r] != '\0')
	{
		r++;
	}
	concat = malloc(sizeof(char) * (i + r + 1));

	if (concat == NULL)
		return (NULL);

	i = 0, r = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		concat[i] = s2[r];
		i++, r++;
	}
	concat[i] = '\0';
	return (concat);
}
