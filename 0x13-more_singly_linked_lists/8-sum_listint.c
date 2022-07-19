#include "lists.h"
/**
 * sum_listint - return the sum of all the data of listint
 * @head: pointer to first element
 * Return: sum or 0 of list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
