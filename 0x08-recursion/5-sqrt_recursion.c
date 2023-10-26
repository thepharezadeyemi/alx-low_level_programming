#include "main.h"

/**
 * sqrt_a - the square root of a number
 * @b: number
 * @a: iltrator
 * Return: result of square root or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - the square root of a number
 * @n: number
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
