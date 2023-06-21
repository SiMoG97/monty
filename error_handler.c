#include "monty.h"


/**
 * error_handler - handles error messages
 * @head: Double pointer to the stack
 * @errno: error number to print the correct message
 * @line_num: the line number where the error occured
 * @line: the line where the error occured
 * Return: Nothing
 */

void error_handler(stack_t **head, int errno,
		unsigned int line_num, char *line)
{
	if (errno == ERROR_PUSH)
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
	else if (errno == ERROR_MALLOC)
		fprintf(stderr, "Error: malloc failed\n");

	free_stack(head);
	if (line)
		free(line);
	exit(EXIT_FAILURE);
}
