#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: difference of the numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: result of multiplication of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: result of division of the numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: reminder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
