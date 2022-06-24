#include "main.h"
/**
 * _strpbrk - searchs a string for any set of bytes
 * @s: parameter to search
 * @accept: source string
 * Return: bytes or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
