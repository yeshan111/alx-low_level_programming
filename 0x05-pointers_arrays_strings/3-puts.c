#include "main.h"
/**
 * _puts - prints a string
 * @str: takes a string
 */
void _puts(char *str)
{
	int i;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
