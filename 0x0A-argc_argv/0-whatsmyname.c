#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: number of arguments
 * @argv: array that contains the argument
 *
 * Return: 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
