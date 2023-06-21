#include "monty.h"

void _swap(stack_t **top, uint line_number)
{
	stack_t *tmp, *two, *tree;

	if (*top == NULL || (*top)->next == NULL)
		swap_error(line_number);

	tmp = *top;
	two = tmp->next;
	tree = tmp->next->next;

	*top = two;
	two->next = tmp;
	two->prev = NULL;
	tmp->prev = two;
	tmp->next = tree;
	tree->prev = tmp;

}
