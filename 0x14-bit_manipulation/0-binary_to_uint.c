#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: the decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l, i, j, p, s;
	int base;

	base = 2;
	p = 1;
	s = 0;

	if (b == NULL)
		return (0);
	for (l = 0; b[l] != '\0'; l++)
		;
	if (l == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = l - 1; j > 0; j--)
		p = p * base;
		s = s + (p * (b[i] - 48));
		l--;
		p = 1;
	}
	return (s);
}
