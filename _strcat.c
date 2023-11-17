#include "shell.h"

/**
 * _strcat - Concatenate two strings
 * @dest: String destination
 * @src: Source string
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	while (*src)
		*p++ = *src++;

	*p = '\0';

	return (dest);
}
