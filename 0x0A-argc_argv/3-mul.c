#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int prod, x, y;

	if (argv[1] == '\0' && argv[2] == '\0')
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = argv[1] * argv[2];
		printf("%d\n", prod);
		return (0);
	}
}
