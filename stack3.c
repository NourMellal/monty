#include "monty.h"

/**
 * _pchar - This function prints the char at the top of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _pchar(stack_t **top, uint line_number)
{
	int ascci_num;

	if (*top == NULL)
		pchar_error(line_number);

	ascci_num = (*top)->n;

	if (ascci_num < 0 || ascci_num > 127)
		pchar_error2(line_number);

	putchar(ascci_num);
	putchar('\n');
}


/**
 * _pstr - This function prints the string starting at the top of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _pstr(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	(void)line_number;

	while (tmp != NULL && tmp->n != 0 && (tmp->n >= 0 && tmp->n <= 127))
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}


/**
 * _rotl - This function rotates the stack to the top.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _rotl(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;
	int n;

	(void)line_number;

	if (tmp == NULL || tmp->next == NULL)
		return;

	n = tmp->n;
	pop_stack(top, line_number);
	push_stack(top, line_number);
	(*top)->n = n;
}

/**
 * _rotr - This function rotates the stack to the bottom.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _rotr(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;
	int n;

	(void)line_number;

	if (tmp == NULL || tmp->next == NULL)
		return;

	while (tmp->next != NULL)
		tmp = tmp->next;

	n = tmp->n;
	pop_stack(top, line_number);
	push_stack(top, line_number);
	(*top)->n = n;
}

/**
 * _mod - This function mods the top two elements of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _mod(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	if (tmp == NULL || tmp->next == NULL)
		mod_error(line_number);

	if (tmp->n == 0)
		mod_error2(line_number);

	tmp->next->n = tmp->next->n % tmp->n;
	*top = tmp->next;
	free(tmp);
}

