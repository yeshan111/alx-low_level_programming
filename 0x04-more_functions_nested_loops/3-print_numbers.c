#inlcude "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 *
 * Return: will be 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
