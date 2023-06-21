#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line
 *
 * @stack: Double pointer to the stack
 * @line_number: Line number of the command in the source file
 *
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL)
	{
		set_op_tok_error(pint_er(line_number));
		return;
	}

	printf("%d\n", (*stack)->next->n);




}
