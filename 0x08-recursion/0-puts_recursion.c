#include "main.h"

/**
 *  _puts_recursion - recursive funct to print
 *
 *  @s: pointer to str
 *
 *  Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
