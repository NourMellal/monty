#include "monty.h"

/**
 * get_op_code - This function gets the opcode.
 *
 * @token: Token to compare.
 * @line: Line number of the opcode.
 * Return: Pointer to the function.
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
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"#", _nop},
		{"", _nop},
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
 * _nop - This function does nothing.
 *
 * @top: Pointer to the top of the stack.
 * @line: Line number of the opcode.
 */

void _nop(stack_t **top, uint line)
{
	(void) top;
	(void) line;
}
