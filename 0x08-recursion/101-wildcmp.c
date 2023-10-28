#include "main.h"

/**
 * wildcmp - compare two strings
 * @a: string 1
 * @b: string 2
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *a, char *b)
{
	if (*a == '\0' && *b == '\0')
		return (1);
	if (*b == '*')
		return (wildcmp(a, b + 1) || wildcmp(a + 1, b));
	if (*a == '\0' && *b == '*' && *(b + 1) != '\0')
		return (0);
	if (*a == *b)
		return (wildcmp(a + 1, b + 1));
	return (0);
}
