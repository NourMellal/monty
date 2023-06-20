#include "monty.h"

stack_t *push(stack_t **top, const int n)
{
	stack_t	*NewNode;

	NewNode = malloc(sizeof(stack_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->prev = NULL;

	/* Validate if empty list*/
	if (*top == NULL)
	{
		NewNode->next = NULL;
		*top = NewNode;
		return (NewNode);
	}
	/* if is not empty list */
	NewNode->next = *top;
	(*top)->prev = NewNode;
	*top = NewNode;

	return (NewNode);
}