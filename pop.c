#include "monty.h"

/**
 * pop - A function to remove the first node(top) of the stack
 * @top: A double pointer to the top of the stack
 * @line_number: The current line of execution, also used for
 * error reporting
 */
void pop(stack_t **top, unsigned int line_number)
{
	stack_t *next_node;

	if (!top || !*top)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	next_node = (*top)->next;

	free(*top);

	*top = next_node;
}
