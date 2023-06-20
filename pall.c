#include "monty.h"

/**
 * pall - prints all the values on the stack,starting from the top of the stack
 *
 * @stack: Double pointer to the stack
 * @line_number: Line number of the command in the source file
 *
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	char buf[1024];
	int len = 0;

	for (stack_t *temp = *stack; temp; temp = temp->next)
	{
		len += sprintf(buf + len, "%d\n", temp->n);
	}

	if (len > 0)
		fwrite(buf, 1, len, stdout);
}
