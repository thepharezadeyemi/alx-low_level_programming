#include "main.h"

/**
 * _strlen_recursion - count string length
 *
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compare_str - compare each character of a string
 * @s: string
 * @l: smaller iterator
 * @r: larger iterator
 * Return: int
 */
int compare_str(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
	return (0 + compare_str(s, l + 1, r - 1));
	}
	return (0);
}
/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare_str(s, 0, _strlen_recursion(s) - 1));
}
