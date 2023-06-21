#include "monty.h"

/**
 * mod - computes the rest of the division of the second top element
 *	of the stack by the top element of the stack
 *
 * @stack: Double pointer to the stack
 * @line_number: Line number of the command in the source file
 *
 * Return: Nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second;
	int sum = 0;

	if (!(*stack) || !(*stack)->next)
		error_handler(stack, ERROR_ADD, line_number, NULL, NULL);
	top = *stack;
	second = (*stack)->next;
	sum = top->n + second->n;
	second->n = sum;

	top->next = second->next;
	free(top);
	*stack = second;
}
