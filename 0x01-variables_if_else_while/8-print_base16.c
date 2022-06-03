#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	i = 0;

	while (i > 'e')
	{
		printf("%x", i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
