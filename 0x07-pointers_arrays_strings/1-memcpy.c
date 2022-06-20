#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
