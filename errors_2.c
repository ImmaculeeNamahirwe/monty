

#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - print error messages are printed for empty stack.
 * @line_number: Line number in script where error happened.
 *
 * Return: (EXIT_FAILURE) usually.
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - print error messages are printed for empty stacks.
 * @line_number: Line number in Monty byte codes file where error happened.
 *
 * Return: (EXIT_FAILURE) usually.
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - monty math function error messages are printed.
 *                     for stacks/queues smaller than 2 nodes.
 * @line_number: line number where the problem occurred in the Monty bytecodes file.
 * @op: Operation where the mistake happened.
 *
 * Return: (EXIT_FAILURE) usually.
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - division by 0 incorrect messages are printed.
 * @line_number: Line number where the problem occurred in the Monty bytecodes file.
 *
 * Return: (EXIT_FAILURE)usually.
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error -pchar error messages are printed for empty stacks.
 *               empty stacks and non-character values.
 * @line_number: Line number where the problem occurred in the Monty bytecodes file.
 * @message: To print the relevant error message.
 *
 * Return: (EXIT_FAILURE) usually.
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
