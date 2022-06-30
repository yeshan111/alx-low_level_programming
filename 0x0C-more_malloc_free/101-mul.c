#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two positive integers
 * @argc: arguments
 * @argv: vector array for arguments
 * Return: product
 */
int main(int argc, char *argv[])
{
unsigned long long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atoll(argv[1]) *  atoll(argv[2]);
	printf("%lu\n", mul);
return (0);
}
