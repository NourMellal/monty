#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @top: Pointer to the top of the stack.
 * @line_number: The line number where the swap opcode is encountered.
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
 * _add - Adds the top two elements of the stack.
 * @top: Pointer to the top of the stack.
 * @line_number: The line number where the add opcode is encountered.
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
 * _sub - Subtracts the top element from the second top element of the stack.
 * @top: Pointer to the top of the stack.
 * @line_number: The line number where the sub opcode is encountered.
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
