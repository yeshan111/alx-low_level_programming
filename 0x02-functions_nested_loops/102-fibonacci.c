#include <stdio.h>
/**
 * main - Entry point, prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 50; n++)
	{
		n = (n - 1) + (n - 2);
		printf("%d, ", n);
	}
	printf('\n');
	return (0);
}
