#include "shell.h"

/**
 * bfree - frees the pointer and makes address NULL
 * @ptr: Address of the pointer to free
 *
 * Return: 1 if freed, 0 otherwise.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
