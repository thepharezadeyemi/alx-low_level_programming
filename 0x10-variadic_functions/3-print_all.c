#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 * @format: argument specifier
 * Return: argument specified
 */
void print_all(const char * const format, ...)
{
	int i, chck_stat;
	char *str;
	va_list spf;

	va_start(spf, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spf, int));
				chck_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spf, double));
				chck_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spf, int));
				chck_stat = 0;
				break;
			case 's':
				str = va_arg(spf, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				chck_stat = 0;
				break;
			default:
				chck_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && chck_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spf);
}
