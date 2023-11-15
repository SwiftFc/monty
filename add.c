#include "monty.h"

/**
 * add - A function that is designed to add the values of the top two
 *       elements in a stack.
 * @stack: A double pointer to the beginning of the stack. It allows
 *         the function to modify the original stack pointer
 * @line_number: The line number where the add opcode is being executed
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}

