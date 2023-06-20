#include "monty.h"

int main(int argc, char **argv)
{
	FILE *fp;
	char *lineBuf = NULL, *token = NULL;
	size_t num_ch_readed = 0;
	uint line_counter = 1;

	if (argc != 2)
		error_arguments();

	fp = fopen(argv[1], "r");

	if(fp == NULL)
		open_error(argv);

	/* get number of lines */
	while(getline(&lineBuf, &num_ch_readed, fp) != EOF)
	{
		token = strtok(lineBuf, "\n");
		line_counter++;
	}

	return (0);
}