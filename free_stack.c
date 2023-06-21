#include "monty.h"

/**
  * free_stack - Frees nodes in a doubly linked stack list
  * Return: Nothing
  */

void free_stack(void)
{
	stack_t *curr = NULL;

	if (!head)
		return;

	curr = head;
	while (curr)
	{
		head = head->next;
		free(curr);
		curr = head;
	}
}
