#include "monty.h"

/**
 * pint - A function to print the value at the top of the stack
 * @stack: The stack to be modified
 * @line_number: The line number where the pint opcodes appears
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
