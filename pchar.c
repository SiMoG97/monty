#include "monty.h"
/**
 * monty_pchar - Prints the character in the top value
 * @stack: A pointer to the node
 * @line_number: line number of a Monty
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		error_handler(stack, ERROR_PCHAR, line_number, NULL, NULL);

	}
	if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
	{
		error_handler(stack, ERROR_PCHAR, line_number, NULL, NULL);

	}

	printf("%c\n", (*stack)->next->n);
}
