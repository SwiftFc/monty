#include "monty.h"

/**
 * pall - A function to print all the numbers in the stack
 * @stack: The Stack to be printed
 */

void pall(stack_t **stack)
{
	stack_t *current;

	current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
