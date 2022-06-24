#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @src: source string
 * @dest: destination string
 * Return: concatenated string with null byte
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	i++;
	return (dest);
}
