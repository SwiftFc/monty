#include "monty.h"

/**
 * mydiv - A function that is designed to divide the values of the top
 *         two elements in a stack
 * @stack: A double pointer to the beginning of the stack. It allows the
 *         function to modify the original stack pointer
 * @line_number: The line number of the  divide opcode is being executed.
*/

void mydiv(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}
