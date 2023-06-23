#include "monty.h"

/**
 * free_lineptr - frees pointer's line
 * @status: exit the status
 * @arg: pointer to a line
 *
 * Return: nothing
 */

void free_lineptr(int status, void *arg)
{
	char **lineptr = arg;

	(void)status;
	
	if (*lineptr != NULL)
		free(*lineptr);
}
