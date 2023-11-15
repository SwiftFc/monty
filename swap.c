#include "monty.h"

/**
 * swap - Swaps the positions of the top two elements in the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: The line number where the swap opcode is executed,
 * also used for error reporting
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int tempValue;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tempValue = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tempValue;
}
