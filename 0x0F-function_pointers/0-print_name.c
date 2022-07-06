#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name:  name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
