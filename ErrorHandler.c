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

void invalidInstruction_error(char *invalidInctruction, uint line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invalidInctruction);
	exit(EXIT_FAILURE);
}