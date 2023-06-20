#include "monty.h"

void error_arguments(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void open_error(char **argv)
{
	char *filename = argv[1];

	fprintf(stderr, "Error: can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}