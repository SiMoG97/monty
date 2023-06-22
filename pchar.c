#include "monty.h"
/**
 * monty_pchar - Prints the character in the top value
 * @stack: A pointer to the node
 * @line_number: line number of a Monty
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
	int node;
	(void) line_number;

	if (*stack == NULL || stack == NULL)
	{
		error_handler(stack, ERROR_PCHAR, line_number, NULL, NULL);
	}
	node = (*stack)->n;
	if (node >= 'a' && node <= 'z')
	{
		putchar(node);
		printf("\n");
	}
	else if (node >= 'A' && node <= 'Z')
	{
		putchar(node);
		printf("\n");
	}
	else
	{
		error_handler(stack, ERROR_PCHAR, line_number, NULL, NULL);
	}
}

