#include "monty.h"

/**
 * pchar - A function to print the character at the top of the stack
 * @stack: Point sto the beinning of the stack
 * @line_number: The line number of the opcode being executedd.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;

	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(value);
	putchar('\n');

	pop(stack, line_number);
}
