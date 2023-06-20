#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: Double pointer to the stack
 * @line_number: Line number of the command in the source file
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	int i = 0, n = 0;

	if (!argument)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (argument[i] == '-')
		i++;
	for (; argument[i]; i++)
	{
		if (argument[i] < '0' || argument[i] > '9')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}

		n = n * 10 + (argument[i] - '0');
	}
	if (argument[0] == '-')
		n = -n;
	stack_t *new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (*stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	*stack = new_node;
}

