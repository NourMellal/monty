#include "monty.h"

extern int number;

void push_stack(stack_t **top, uint line_number)
{
	stack_t	*NewNode;

	(void)line_number;
	NewNode = malloc(sizeof(stack_t));

	if (NewNode == NULL)
		exit(EXIT_FAILURE);

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
