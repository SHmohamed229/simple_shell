#include "shell.h"

/**
 * *_memset - fills mem with a con byte
 * @s: point to mem area
 * @b: byte to fills *s with
 * @n: amount of bytes to filled
 * Return: (s) a point to mem area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * ffree - ffree strings of thr strs
 * @pp: str of str
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
/**
 * _realloc - reallocattes vlock of mem
 * @ptr: pointer to prev malloc block
 * @old_size: b size prev block
 * @new_size: byte s of a new block
 *
 * Return: point to da ol'block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
