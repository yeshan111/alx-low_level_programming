#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: takes in an integer
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = n * -1;
	}
	i = n % 10;
	return (i);
}
