#include "monty.h"

/**
 * pchar - adds the top two elements of the stack
 *
 * @stack: Double pointer to the stack
 * @line_number: Line number of the command in the source file
 *
 * Return: Nothing
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!(*stack))
		error_handler(stack, ERROR_PCHAR, line_number, NULL, NULL);

	n = (*stack)->n;

	if (n < 0 || n > 127)
		error_handler(stack, ERROR_ASCII, line_number, NULL, NULL);

	printf("%c\n", n);
}
