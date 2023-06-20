#include "monty.h"

extern int number;

void open_and_read(char **argv)
{
	/* prototype from struct instruct */
	void (*p_func)(stack_t **, uint);

	FILE *fp;
	char *lineBuf = NULL, *token = NULL, command[1024];
	size_t len = 0;
	size_t line_size;
	uint line_counter = 1;
	stack_t *top = NULL;

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		open_error(argv);

	/* get number of lines */
	while((line_size = getline(&lineBuf, &len, fp)) != EOF)
	{
		token = strtok(lineBuf, " ");
		strcpy(command, token);
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " ");
			number = atoi(token);
	/* p_func will receive the function to execute */
	p_func = get_op_code(command, line_counter);
	/* p_func takes place of the function to execute: push, pall, etc*/
	p_func(&top, line_counter);
		}

		line_counter++;
	}

	/*pall_stack(top, line_counter);*/
}