#include "shell.h"

/**
 * _strln - return length of a str
 * @s: string whose length checks
 *
 *
 * Return: int len of str
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
/**
 * _strcmp - performs lex comparison os 2 str.
 * @s1: first str
 * @s2: sec str
 *
 * Return: neg if s1 < s2, pos if s1 > s2, zero s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}
/**
 * starts_with - checks if need starts with haystack
 * @haystack: str to search
 * @needle: sub to find
 *
 * Return: add of next char of hay or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}
/**
 * _strcat - concatenates 2 strings
 * @dest: destination buff
 * @src: source buff
 *
 * Return: point to des buff
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
