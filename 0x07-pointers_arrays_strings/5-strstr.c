#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: result
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
