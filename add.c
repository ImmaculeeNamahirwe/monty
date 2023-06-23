#include "monty.h"

/**
 * m_add - the top two items in the stack added
 * @stack: pointer to the top of the stack
 * @line_number:number's line
 *
 * Return: nothing
 */

void m_add(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't add, stack too short\n",
			line_number);

		exit(EXIT_FAILURE);
	}

	n += (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n += n;
}
