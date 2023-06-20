#include "monty.h"

void open_and_red(char **argv)
{
	void (*p_func)(char *, int);
	FILE *fp;
	char *lineBuf = NULL, *token = NULL, *top = NULL;
	size_t num_ch_readed = 0;
	uint line_counter = 1;

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		open_error(argv);

	/* get number of lines */
	while(getline(&lineBuf, &num_ch_readed, fp) != EOF)
	{
		token = strtok(lineBuf, "\n");
		line_counter++;
	}
/* p_func will recieve the function to execute */

	p_func = get_operation_code(token);

	p_func(top, atoi(token));

}