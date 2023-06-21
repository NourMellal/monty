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

void swap_error(uint line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}

void add_error(uint line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}

void sub_error(uint line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}

void div_error(uint line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}

void mul_error(uint line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}

void mod_error(uint line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}

void div_error2(uint line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}

void mod_error2(uint line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}

void pchar_error(uint line)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line);
	exit(EXIT_FAILURE);
}

void pchar_error2(uint line)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
	exit(EXIT_FAILURE);
}
