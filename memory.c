#include "shell.h"

/**
 * bfree - freds a pointer and NULLs the add
 * @ptr: add of the point to frees
 *
 * Return: 1 if frees, otherwise 0.
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
