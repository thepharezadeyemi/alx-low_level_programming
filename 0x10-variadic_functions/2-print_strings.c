#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings passed to a function
 * @separator: separator between strings
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(Null)");
		}
		else
		{
			printf("%s", str);
		}

		if (j != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
