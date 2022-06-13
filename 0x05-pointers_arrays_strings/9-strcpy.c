#include "main.h"
/**
 * _strcpy - copies stringg from src to dest
 * @src: a char
 * @dest: a char
 * Return: at dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
