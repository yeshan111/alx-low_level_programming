#include "main.h"
/**
 * _strcpy - copies stringg from src to dest
 * @src: a char
 * @dest: a char
 * Return: at dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
