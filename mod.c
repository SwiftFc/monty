#include "monty.h"

/**
 * modolos - A function that is designed to find the remainder of the division
 *         of the stack from the second top element.
 * @stack: A double pointer to the beginning of the stack. It allows the
 *         the function to modify the original stack pointer
 * @line_number: The line number where the modulos opcode is being executed.
 */

void modolos(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n; /* Compute the remainder */
	pop(stack, line_number);
}
