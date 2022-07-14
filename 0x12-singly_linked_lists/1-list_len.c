#include "lists.h"
/**
 * list_len - returns the number of elements in list_t
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
