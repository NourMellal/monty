#include "monty.h"

/**
 * pint_error - Handles error when attempting to pint from an empty stack.
 * @line: The line number where the error occurred.
 */
void pint_error(uint line)
{
	fprintf(stderr, "L:%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - Handles error when attempting to pop from an empty stack.
 * @line: The line number where the error occurred.
 */
void pop_error(uint line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - Handles error when stack is
 * too short to perform swap operation.
 * @line: The line number where the error occurred.
 */
void swap_error(uint line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * add_error - Handles error when stack is
 * too short to perform addition operation.
 * @line: The line number where the error occurred.
 */
void add_error(uint line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * sub_error - Handles error when stack is
 * too short to perform subtraction operation.
 * @line: The line number where the error occurred.
 */
void sub_error(uint line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}
