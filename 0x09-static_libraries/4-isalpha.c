#include "main.h"

/**
 * _isalpha - search for alphabetic characters
 * @i: the characters to search
 * Return: 1 if i is an alphabet, else 0
 */
int _isalpha(int i)
{
	return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}
