#include <stdio.h>
/**
 * main - finds prime factor
 *
 * Return: 0
 */
int main(void)
{
	int i, j, num, isPrime;

	num = 612852475143;
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if (isPrime == 1)
			{
				printf("\n %d is a Prime Factor ", i);
			}
		}
	}
	printf("\n");
	return (0);
}
