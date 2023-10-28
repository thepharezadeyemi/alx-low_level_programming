#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array that contains the argument
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
