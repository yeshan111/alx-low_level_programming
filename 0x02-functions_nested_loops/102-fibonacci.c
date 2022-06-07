#include <stdio.h>
/**
 * main - Entry point, prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long pri = 1, sec = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = pri + sec;
		printf(", %lu", sum);
		pri = sec;
		sec = sum;
	}
	printf("\n");
	return (0);
}
