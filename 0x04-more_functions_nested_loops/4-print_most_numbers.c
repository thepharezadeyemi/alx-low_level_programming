#include "main.h"

/**
 * print_most_numbers - checks for checks for a digit (0 through 9).
 * Return: The numbers since 0 up to 9.
 */

void print_most_numbers(void)

{
	int c = 0;

	for (c < =58; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	else
	{
	_putchar(c);
	}
	}
	_putchar('\n');
}
