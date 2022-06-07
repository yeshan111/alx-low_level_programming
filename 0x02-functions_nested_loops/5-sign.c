#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: takes in a number
 * Return: 1 if +, 0 if zero and -1 if less that zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
