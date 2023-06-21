#include "monty.h"


/**
 * error_handler - handles error messages
 * @errno: error number to print the correct message
 * @line_num: the line number where the error occured
 * @line: the line where the error occured
 * Return: Nothing
 */

void error_handler(int errno, unsigned int line_num, char *line)
{
	if (errno == ERROR_PUSH)
		fprintf(stderr, "L%u: usage: push integer", line_num);

	free_stack();
	if (line)
		free(line);
	exit(EXIT_FAILURE);
}
