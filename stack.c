#include "monty.h"

extern int number;

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

void pint_stack(stack_t **top, uint line_number)
{
	stack_t *tmp = *top;

	if (tmp != NULL)
	{
		printf("%d\n", tmp->n);
	}
	pint_error(line_number);
}