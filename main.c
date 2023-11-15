#include "monty.h"

/**
 * main - Entry point of the program
 * @argc: argumnet count
 * @argv: argument vector
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char line[100];  /* Adjust the buffer size as needed */
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	stack_t *current;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		char *opcode;
		int value;

		line_number++;

		/* Skip empty lines or comments */
		if (strlen(line) == 0 || line[0] == '#' || line[0] == '\n')
			continue;

		opcode = strtok(line, " \t\n");
		if (opcode == NULL)
		continue;

		if (strcmp(opcode, "push") == 0)
		{
			char *arg = strtok(NULL, " \t\n");

			if (arg == NULL)

			{
				fprintf(stderr, "L%u: usage: push integer\n", line_number);
				fclose(file);
				return (EXIT_FAILURE);
			}

			value = atoi(arg);
			push(&stack, value);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			pall(&stack);
		}
		else if (strcmp(opcode, "pint") == 0)
		{
			pint(&stack, line_number);
		}
		else if (strcmp(opcode, "pop") == 0)
		{
			pop(&stack, line_number);
		}
		else if (strcmp(opcode, "swap") == 0)
		{
			swap(&stack, line_number);
		}
		else if (strcmp(opcode, "add") == 0)
		{
			add(&stack, line_number);
		}
		else if (strcmp(opcode, "nop") == 0)
		{
			nop(&stack, line_number);
		}
		/*else if (strcmp(opcode, "sub") == 0)
		{
			sub(&stack, line_number);
		}
		else if (strcmp(opcode, "div") == 0)
		{
			div_op(&stack, line_number);
		}
		else if (strcmp(opcode, "mul") == 0)
		{
			mul(&stack, line_number);
		}
		else if (strcmp(opcode, "mod") == 0)
		{
			mod(&stack, line_number);
		}
		else if (strcmp(opcode, "pchar") == 0)
		{
			pchar(&stack, line_number);
		}
		else if (strcmp(opcode, "pstr") == 0)
		{
			pstr(&stack);
		}
		else if (strcmp(opcode, "rotl") == 0)
		{
			rotl(&stack);
		}*/
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			fclose(file);
			return (EXIT_FAILURE);
		}
	}

	current = stack;
	while (current != NULL)
	{
		stack_t *temp = current;

		current = current->next;
		free(temp);
	}

	fclose(file);
	return (EXIT_SUCCESS);
}
