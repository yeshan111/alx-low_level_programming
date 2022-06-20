#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: bytes
 * @accept: source
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (accept[i] <= s)
	{
		i++;
	}
	return (i);
}
