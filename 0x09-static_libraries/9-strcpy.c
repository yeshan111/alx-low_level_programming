#include "main.h"
/**
 * _strcpy - copies stringg from src to dest
 * @src: a char
 * @dest: a char
 * Return: at dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
