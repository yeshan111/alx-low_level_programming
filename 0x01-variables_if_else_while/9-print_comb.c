#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
		putchar(",");
		putchar(" ");
	}
	putchar('\b''\b');
	return (0);
}
