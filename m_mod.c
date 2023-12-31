#include "monty.h"

/**
 * m_mod - calculates remainder of second element by the head of element
 * @stack: arrow to top of stack
 * @line_number: Operation's line number
 *
 * Return: nothing
 */

void m_mod(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't mod, stack too short\n",
			line_number);

		exit(EXIT_FAILURE);
	}

	n = (*stack)->n;
	m_pop(stack, line_number);

	if (n == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: division by zero\n",
			line_number);

		exit(EXIT_FAILURE);
	}

	(*stack)->n %= n;
}
