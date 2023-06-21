#include "monty.h"

/**
 * pint_error - This function prints the error message when pint fails.
 *
 * @line: Line number of the opcode.
 */

void pint_error(uint line)
{
	fprintf(stderr, "L:%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - This function prints the error message when pop fails.
 *
 * @line: Line number of the opcode.
 */

void pop_error(uint line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - This function prints the error message when swap fails.
 *
 * @line: Line number of the opcode.
 */

void swap_error(uint line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * add_error - This function prints the error message when add fails.
 *
 * @line: Line number of the opcode.
 */

void add_error(uint line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * sub_error - This function prints the error message when sub fails.
 *
 * @line: Line number of the opcode.
 */

void sub_error(uint line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * div_error - This function prints the error message when div fails.
 *
 * @line: Line number of the opcode.
 */

void div_error(uint line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * mul_error - This function prints the error message when mul fails.
 *
 * @line: Line number of the opcode.
 */

void mul_error(uint line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * mod_error - This function prints the error message when mod fails.
 *
 * @line: Line number of the opcode.
 */

void mod_error(uint line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * div_error2 - This function prints the error message when div fails.
 *
 * @line: Line number of the opcode.
 */

void div_error2(uint line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}

/**
 * mod_error2 - This function prints the error message when mod fails.
 *
 * @line: Line number of the opcode.
 */

void mod_error2(uint line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}

/**
 * pchar_error - This function prints the error message when pchar fails.
 *
 * @line: Line number of the opcode.
 */

void pchar_error(uint line)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line);
	exit(EXIT_FAILURE);
}

/**
 * pchar_error2 - This function prints the error message when pchar fails.
 *
 * @line: Line number of the opcode.
 */

void pchar_error2(uint line)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
	exit(EXIT_FAILURE);
}
