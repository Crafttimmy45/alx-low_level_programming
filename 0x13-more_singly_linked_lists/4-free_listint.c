#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a lisst
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
