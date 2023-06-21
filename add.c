#include "monty.h"

/**
 * add - adds the top two elements of the stack
 *
 * @stack: Double pointer to the stack
 * @line_number: Line number of the command in the source file
 *
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)

		error_handler(stack, ERROR_ADD, line_number, NULL, NULL);

	(*stack)->next->next->n += (*stack)->next->n;
	pop(stack, line_number);
}
