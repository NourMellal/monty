#include "monty.h"

extern int number;

/**
 * push_stack - This function pushes an element to the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void push_stack(stack_t **top, uint line_number)
{
	stack_t	*NewNode;

	(void)line_number;
	NewNode = malloc(sizeof(stack_t));

	if (NewNode == NULL)
		malloc_error();

	NewNode->n = number;
	NewNode->prev = NULL;


	if (*top == NULL) /* Validate if empty list*/
	{
		NewNode->next = NULL;
		*top = NewNode;
	}
	else /* if is not empty list */
	{
		NewNode->next = *top;
		(*top)->prev = NewNode;
		*top = NewNode;
	}
}

/**
 * pall_stack - This function prints all the values on the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void pall_stack(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	(void)line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * free_stack - This function frees the stack.
 *
 * @top: Pointer to the top of the stack.
 */

void free_stack(stack_t *top)
{
	stack_t *temp;

	if (top == NULL)
		return;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
	free(top);
}

/**
 * pint_stack - This function prints the value at the top of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void pint_stack(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	if (tmp != NULL)
		printf("%d\n", tmp->n);
	else
		pint_error(line_number);
}

/**
 * pop_stack - This function removes the top element of the stack.
 *
 * @top: Pointer to the top of the stack.
 * @line_number: Line number of the opcode.
 */

void pop_stack(stack_t **top, uint line_number)
{
	stack_t *tmp;

	tmp = *top;
	if (*top == NULL)
		pop_error(line_number);

	tmp = tmp->next;
	free(*top);
	*top = tmp;
}
