#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: bytes
 * @accept: source
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}
		}
		if (s[j] == '\0')
			return (r);
	}
	return (r);
}
