#include "main.h"
/**
 * string_toupper - changes all lower case letter to upper case
 * @s: array for string
 * Return: Upper case
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
