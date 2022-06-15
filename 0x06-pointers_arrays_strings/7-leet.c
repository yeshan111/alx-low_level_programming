#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: accepts string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char code[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; code[j] != '\0'; j++)
		{
			if (s[i] == code[j])
			{
				s[i] = code[j + 1];
				break;
			}
		}
	}
	return (s);
}

