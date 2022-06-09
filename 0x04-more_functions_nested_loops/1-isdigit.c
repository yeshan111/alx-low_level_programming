#include "main.h"
/**
 * _isdigit - function that checks for digits from 0-9
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
