#include "monty.h"

void (get_operation_code(char *token)) (stack_t **top, uint line)
{
	int i;
	instruction_t operations[] = {
		{"push", push_stack},
		{"pall", pall},
		{NULL, NULL}
	};
	for (i = 0; operations[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			return (operation[i].f);
		}
	}
	invalidInstruction_error(token, line);
}