#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: character if found, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char j;

	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
		{
			return (c);
		}
		else
		{
			return (NULL);
		}
	}
}
