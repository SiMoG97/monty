#include "monty.h"

stack_t *head = NULL;

/**
  * main - Entry point
  *
  * @argc: number of args passed to the program
  * @argv: array of arguments passed
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL, *op_code = NULL, *data = NULL, *delim = " \t\n";
	unsigned int line_num = 0;
	size_t line_len = 0;
	int status = 0;

	check_num_args(argc);
	file = open_file(argv[1]);

	while (getline(&line, &line_len, file) != -1)
	{
		line_num++;
		op_code = strtok(line, delim);
		if (op_code)
		{
			data = strtok(NULL, delim);
			status = execute_line(op_code, data, line_num);
			if (status != 0)
			{
				fclose(file);
				error_handler(status, line_num, line);
			}

		}
	}
	free_stack();
	free(line);
	fclose(file);
	return (0);
}

