#include "monty.h"

/**
 * add_node - new node are added to linked list
 * @stack: pointer at the head of linked list
 * @n: to be added value to a new node
 *
 * Description:function will tack on a node to the top of the stack or the end of the queue.
 *
 * Return: pointer to new node, or NULL
 */

stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new;

	if (stack == NULL)
		return (NULL);

	new = malloc(sizeof(stack_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*stack == NULL)
	{
		new->prev = new;
		new->next = new;
	}

	else
	{
		(*stack)->prev->next = new;
		new->prev = (*stack)->prev;
		(*stack)->prev = new;
		new->next = *stack;
	}

	if (var.queue == STACK || var.stack_len == 0)
		*stack = new;

	return (new);
}
