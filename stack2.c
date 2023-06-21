#include "monty.h"

/**
 * _swap - This function swaps the top two elements of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */


void _swap(stack_t **top, uint line_number)
{
	int num;

	if (*top == NULL || (*top)->next == NULL)
		swap_error(line_number);

	num = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = num;
}

/**
 * _add - This function adds the top two elements of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _add(stack_t **top, uint line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
		add_error(line_number);

	tmp = (*top)->next;
	tmp->n += (*top)->n;
	pop_stack(top, line_number);
}

/**
 * _sub - This function subtracts the top two elements of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _sub(stack_t **top, uint line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
		sub_error(line_number);

	tmp = (*top)->next;
	tmp->n -= (*top)->n;
	pop_stack(top, line_number);
}

/**
 * _div - This function divides the top two elements of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _div(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	if (tmp == NULL || tmp->next == NULL)
		div_error(line_number);

	if (tmp->n == 0)
		div_error2(line_number);

	tmp->next->n = tmp->next->n / tmp->n;
	*top = tmp->next;
	free(tmp);
}

/**
 * _mul - This function multiplies the top two elements of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _mul(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	if (tmp == NULL || tmp->next == NULL)
		mul_error(line_number);

	tmp->next->n = tmp->next->n * tmp->n;
	*top = tmp->next;
	free(tmp);
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

/**
 * _pchar - This function prints the char at the top of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void _pchar(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	if (tmp == NULL)
		pchar_error(line_number);

	if (tmp->n < 0 || tmp->n > 127)
		pchar_error2(line_number);

	printf("%c\n", tmp->n);
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
