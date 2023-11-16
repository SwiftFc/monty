#include "monty.h"

/**
 * pstr - A function designed to print the starting string
 *        at the top of the stack
 * @stack: stack pointer
 * @line_number: where execution begins
 */

void pstr(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL && current->n != 0 && current->n	>= 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
