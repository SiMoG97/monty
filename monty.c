#include "monty.h"

#define MAX_BUFFER_SIZE 256

int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL, *op_code = NULL, *data = NULL, *delim = " \t\n";
	unsigned int line_num = 1;
	size_t line_len = 0;

	check_num_args(argc);
	file = open_file(argv[1]);

	while (getline(&line, &line_len, file) != -1)
	{
		op_code = strtok(line, delim);
		if (op_code)
		{
			data = strtok(NULL, delim);
			execute_line(op_code, data);
			
		}

		line_num++;
	}
	free(line);
	fclose(file);
	return (0);
}

