#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: of the triangle
 * Return: coz void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i < size; i++)
	{
		for (j = 1; j = (size - 1); j--)
		{
			_putchar(" ");
		}
		_putchar("#");
	}
	_putchar('\n');
	return (0);
}
