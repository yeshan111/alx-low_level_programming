#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @src: source string
 * @dest: destination string
 * Return: concatenated string with null byte
 */
char *_strcat(char *dest, char *src)
{
	int s, d, c, i;

	while (*src[s] != '\0')
	{
		s++;
	}
	while (*dest[d] != '\0')
	{
		d++;
	}
	i = 0;
	for (c = d - 1; *dest != '\0'; c++)
	{
		*dest[c] = *src[i];
	}
	return (dest);
}
