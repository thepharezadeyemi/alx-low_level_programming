#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - the power of a number
 *
 * @x: number
 * @y: power
 *
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (0);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
