#include "monty.h"

/**
 * m_fs_close - shuts off a file stream
 * @status: exit- the status
 * @arg:A pointer to arguments
 *
 * Return: nothing else
 */

void m_fs_close(int status, void *arg)
{
	FILE *fs;

	(void)status;

	fs = (FILE *) arg;

	fclose(fs);
}
