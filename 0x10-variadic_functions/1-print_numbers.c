#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: strings to print the between numbers
 * @n: number of integers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, kkk;

	va_list pntr;

	va_start(pntr, n);

	for (j = 0; j < n; j++)
	{
		kkk = va_arg(pntr, const unsigned int);
			printf("%d", kkk);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pntr);
}

