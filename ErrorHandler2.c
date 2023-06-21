#include "monty.h"

void pint_error(uint line)
{
	fprintf(stderr, "L:%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}