#include <stdio.h>
/**
 * main - prints 100, fizz for 3s, buzz for 5s and fizzbuzz for both
 *
 * Return: voided
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		printf("%d ", i);
	}
}
