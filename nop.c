#include "monty.h"

/**
 * nop - A function that does nothing
 * @stack: Double pointer to the beginning of the stack,
 *  it allows the function to modify the original stack pointer
 * @line_number: Where the 'nop' opcode is being executed
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
