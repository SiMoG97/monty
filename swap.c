#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 *
 * @stack: Double pointer to the stack
 * @line_number: Line number of the command in the source file
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		error_handler(stack, ERROR_swap, line_number, NULL, NULL);
		return;
	}

	tmp = (*stack)->next->next;
	(*stack)->next->next = tmp->next;
	(*stack)->next->prev = tmp;
	if (tmp->next)
		tmp->next->prev = (*stack)->next;
	tmp->next = (*stack)->next;
	tmp->prev = *stack;
	(*stack)->next = tmp;


}
