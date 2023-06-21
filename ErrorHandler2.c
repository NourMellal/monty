#include "monty.h"

void pint_error(uint line)
{
	fprintf(stderr, "L:%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}

void pop_error(uint line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}