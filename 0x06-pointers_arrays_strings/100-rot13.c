#include "main.h"
/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: char value
 */
char *rot13(char *s)
{
	int i;
	int j;
	char code1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char code2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; code1[j]; j++)
		{
			if (s[i] == code1[j])
			{
				s[i] = code2[j];
				break;
			}
		}
	}
	return (s);
}
