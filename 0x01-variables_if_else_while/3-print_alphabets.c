#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c, d;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (d = 'A' ; d <= 'Z' ; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
