#include "monty.h"

/**
 * mymul - A function that is designed to multiply the top element
 *       of the stack from the second top element.
 * @stack: A double pointer to the beginning of the stack. It allows the
 *         the function to modify the original stack pointer
 * @line_number: The line number where the multiply opcode is being executed.
*/
void mymul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n; /* Multiply the top element */
	pop(stack, line_number); /* Remove the top element */
}
