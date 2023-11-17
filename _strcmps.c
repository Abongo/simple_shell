#include <string.h>
#include "shell.h"

/**
 * _strcmps - compares two strings character by character
 * @fstring: the first string
 * @sub: the second string
 *
 * Return: 1 if the strings are equal, -1 otherwise
 */
int _strcmps(const char *fstring, const char *sub)
{
	if (!fstring || !sub)
	{
	return (-1);
	}
	if (!*fstring)
	{
	return (-1);
	}
	if (strlen(fstring) < strlen(sub))
	{
	return (-1);
	}
	while (*sub && *fstring)
	{
	if (*sub != *fstring)
	{
	return (-1);
	}
	sub++;
	fstring++;
	}
	return (1);
}
