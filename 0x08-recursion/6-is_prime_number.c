#include "main.h"

/**
 * prime_i - check for prime numbers
 * @i: input
 * @r: divisor
 * Return: (0)
 */
int prime_i(int i, int r)
{
	if (i <= 1 || (i != r && i % r == 0))
	{
		return (0);
	}
	else if (i == r)
	{
		return (1);
	}
	return (prime_i(i, r + 1));
}
/**
 * is_prime_number - check for prime numbers
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_i(n, 2));
}
