#include "main.h"
/**
 * _isupper - checks if character is uppercase
 * @c: accepts a character
 * Return: returns 1 if variable is upper case and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
