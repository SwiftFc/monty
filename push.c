#include "monty.h"

/**
 * push - A function that adds a new element to the top
 * of a doubly linked list-based  stack
 * @stack: This points to the stack to be worked on or modified
 * @item: The item to be pushed onto the stack
 */

void push(stack_t **stack, int item)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = item;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
