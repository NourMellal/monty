#include "monty.h"

void (*get_op_code(char *token, uint line)) (stack_t **, uint)
{
	int i;
	instruction_t operation[] = {
		{"push", push_stack},
		{"pall", pall_stack},
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
	return NULL;
}