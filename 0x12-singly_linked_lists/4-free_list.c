#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
