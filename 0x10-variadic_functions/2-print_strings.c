#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints numbers
 * @separator: string between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (seperator == NULL)
	{
		separator = "";
	}
	va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(strings, char *);

			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	va_end(strings);
	printf("\n");
}
