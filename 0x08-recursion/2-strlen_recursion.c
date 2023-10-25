#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of strings
 *
 * @s: string
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
