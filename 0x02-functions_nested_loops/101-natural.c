#include <stdio.h>
/**
 * main - Entry point, prints the sum of all natural multiples if 3 & 5
 *
 * Return: 0 as usual
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
