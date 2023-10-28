#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints smallest number of coin
 * @argc: number of arguments
 * @argv: array that contains the argument
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int cent, mini = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
		}
		else if (cent >= 2)
		{
			cent -= 2;
		}
		else if (cent >= 5)
		{
			cent -= 5;
		}
		else if (cent >= 10)
		{
			cent -= 10;
		}
		else if (cent >= 1)
		{
			cent -= 1;
		}
		mini += 1;
	}
	printf("%d\n", mini);
	return (0);
}
