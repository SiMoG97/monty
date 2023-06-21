#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: Double pointer to the stack
 * @nbr: Line number of the command in the source file
 * Return: Nothing
 */

void push(stack_t **stack, unsigned int nbr)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
		error_handler(ERROR_MALLOC, 0, NULL);

	new_node->n = nbr;
	if (*stack)
	{
		new_node->next = *stack;
		new_node->prev = (*stack)->prev;
		(*stack)->prev = new_node;
		*stack = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
