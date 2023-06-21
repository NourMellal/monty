#include "monty.h"

/**
 * get_op_code - Retrieves the function pointer associated with a given opcode.
 * @token: The opcode to search for.
 * @line: The line number where the opcode is encountered.
 *
 * Return: Function pointer corresponding to the opcode.
 */
void (*get_op_code(char *token, uint line)) (stack_t **, uint)
{
	int i;
	instruction_t operation[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{"pint", pint_stack},
		{"pop", pop_stack},
		{"swap", _swap},
		{"nop", _nop},
		{"add", _add},
		{"sub", _sub},
		{NULL, NULL}
	};
	for (i = 0; operation[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			return (operation[i].f);
		}
	}
	invalidInstruction_error(token, line);
	return (NULL);
}

/**
 * _nop - Does nothing.
 * @top: Pointer to the top of the stack.
 * @line: The line number where the NOP opcode is encountered.
 */

void _nop(stack_t **top, uint line)
{
	(void) top;
	(void) line;
}
