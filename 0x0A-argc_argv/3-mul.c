#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array that contains the argument
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
