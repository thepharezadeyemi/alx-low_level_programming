#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/*
 * sum_them_all - sum all parameter passed into the function
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...);
{
	unsigned int sum = 0;
	unsigned int j;

	va_list file;

	va_start(file, n);

	for (j = 0; j < n; j++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(file, const unsigned int);
		}
	}
	va_end(file);
	return (sum);
}
