#include "main.h"
/**
 * factorial - returns a facortial of a given number
 * @n: given number
 * Return: factorial or -1 error if lower than 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
