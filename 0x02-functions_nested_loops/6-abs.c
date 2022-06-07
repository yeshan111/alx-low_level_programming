#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: takes in an integer
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
