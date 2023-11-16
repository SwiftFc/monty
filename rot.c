#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @stack: Double pointer to the beginning of the stack.
*/
void rotl(stack_t **stack)
{
	stack_t *last;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	last = *stack;

	while (last->next != NULL)
		last = last->next;

	last->next = *stack;
	(*stack)->prev = last;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->next = NULL;
}
